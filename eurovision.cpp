#include <iostream>
#include "eurovision.h"

Participant::Participant(const string state, const string song,
            const int timeLength, const string singer):
            state_name(state), song_name(song), song_length(timeLength),
            singer_name(singer), is_registered(false){}

const string Participant::state() const{
    return state_name;
}
string Participant::song() const {
    return song_name;
}
int Participant::timeLength() const {
    return song_length;
}
string Participant::singer() const {
    return singer_name;
}
bool Participant::isRegistered() const {
    return is_registered;
}
void Participant::update(const string song, const int timeLength, const string singer) {
    if (!isRegistered()) {
        if (!song.empty()) {
            song_name = song;
        }
        if (timeLength) {
            song_length = timeLength;
        }
        if (!singer.empty()) {
            singer_name = singer;
        }
    }
}

void Participant::updateRegistered(bool flag){
    is_registered=flag;
}

ostream &operator<<(ostream &os, const Participant &p){
    //[Australia/Song_Australia/180/Singer_Australia]
    os << "[";
    os << p.state() << "/";
    os << p.song() << "/";
    os << p.timeLength() << "/";
    os << p.singer();
    os << "]";
    return os;
}

Voter::Voter(const string state, const VoterType type):
    state_name(state),
    type(type),
    times_voted(0){}


Voter& Voter::operator++(){
    ++times_voted;
    return *this;
}
const string Voter::state() const{
    return state_name;
}
VoterType Voter::voterType() const{
    return type;
}
int Voter::timesOfVotes() const{
    return times_voted;
}

ostream &operator<<(ostream &os, const Voter &vr){
    //<Israel/Judge>
    string voter_type[3]= {"All", "Regular", "Judge"};
    os << "<";
    os << vr.state() << "/";
    os << voter_type[vr.voterType()];
    os << ">";
    return os;
}

Vote::Vote(Voter& voter, const string state0,
           const string state1, const string state2,
           const string state3, const string state4,
           const string state5 , const string state6,
           const string state7 , const string state8,
           const string state9 ): voter(voter),
           states(new string[10]{state0, state1, state2, state3, state4,
                  state5,state6, state7, state8, state9})
           {}

Vote::Vote(const Vote& vote):
    voter(vote.voter),
    states(new string[10])
{
    for(int i=0; i<10; i++){
        states[i]= vote.states[i];
    }
}

Vote::~Vote() {
    delete[] states;
}


MainControl::ParticipantWithVotes::ParticipantWithVotes(Participant* participant):
participant(participant),
regular_votes(0),
judge_votes(0)
{}

void MainControl::ParticipantWithVotes::swap(MainControl::ParticipantWithVotes &a,
                                             MainControl::ParticipantWithVotes &b)
                                             {
    MainControl::ParticipantWithVotes temp(a);
    a=b;
    b=temp;
}

MainControl::MainControl(const int max_time_length,
            const int max_number_of_participants,
            const int max_times_voter) :
            max_time_length(max_time_length),
            max_number_of_participants(max_number_of_participants),
            max_times_voter(max_times_voter),
            phase(Registration),
            participant_array(new ParticipantWithVotes[max_number_of_participants]),
            participant_counter(0)
{}

MainControl::~MainControl(){
    delete[] participant_array;
}

void MainControl::setPhase(Phase new_phase){
    if(phase==Registration && new_phase==Contest)
        phase=Contest;
    if(phase==Contest && new_phase==Voting)
        phase=Voting;
}
bool MainControl::participate(const string participant_name){
    return getByState(participant_name) != nullptr;
}

MainControl& MainControl::operator+=(Participant& p){
    if(phase != Registration)
        return *this;
    if(participate(p.state()) || !legalParticipant(p))
        return *this;
    if(max_number_of_participants==participant_counter)
        return *this;
    int p_index=get_state_index(p.state());
    shift(p_index, Right);
    participant_array[p_index]=ParticipantWithVotes(&p);
    p.updateRegistered(true);
    participant_counter++;
    return *this;
}

MainControl& MainControl::operator-=(Participant &p){
    if(phase != Registration)
        return *this;
    if(!p.isRegistered())
        return *this;
    int p_index=get_state_index(p.state());
    participant_array[p_index]=ParticipantWithVotes(nullptr);
    shift(p_index, Left);
    p.updateRegistered(false);
    participant_counter--;
    return *this;
}

ostream &operator<<(ostream &os, const MainControl &mc){
    /*
    {
    Voting
    Australia : Regular(0) Judge(8)
    Cyprus : Regular(7) Judge(12)
    Israel : Regular(1) Judge(0)
    UK : Regular(1) Judge(10)
    }
    */
    string phases[3]= {"Registration", "Contest", "Voting"};
    os << "{" << endl << phases[mc.phase] << endl;
    for(int i=0; i<mc.participant_counter; i++) {
        MainControl::ParticipantWithVotes cur_pwv=mc.participant_array[i];
        if(mc.phase==Registration)
            os << *(cur_pwv.participant) << endl;
        else if(mc.phase==Voting) {
            int regular = cur_pwv.regular_votes;
            int judge = cur_pwv.judge_votes;
            os << cur_pwv.participant->state() << " : Regular(" << regular << ") Judge("
               << judge << ")" << endl;
        }
    }
    os << "}" << endl;
    return os;
}

bool MainControl::legalParticipant(Participant& p){
    if(p.state().empty() || p.song().empty() || p.singer().empty())
        return false;
    return (p.timeLength() <= max_time_length && p.timeLength() > 0);
}

MainControl::ParticipantWithVotes* MainControl::getByState(string state) const{
    for(int i=0; i < participant_counter; i++){
        Participant* cur_p = participant_array[i].participant;
        if (cur_p->state() == state)
            return &participant_array[i];
    }
    return nullptr;
}

MainControl& MainControl::operator+=(Vote vote){
    string voter_state = vote.voter.state();
    if (!getByState(voter_state))
        return *this;
    if(vote.voter.voterType() == Regular) {
        if (vote.voter.timesOfVotes() >= max_times_voter)
            return *this;
        string vote_to = vote.states[0];
        if (getByState(vote_to) && voter_state != vote_to) {
            getByState(vote_to)->regular_votes++;
            ++(vote.voter);
        }
    }
    else if(vote.voter.voterType() == Judge){
        if(vote.voter.timesOfVotes())
            return *this;
        int counter=0;
        for(int i=0; i < 10; i++){
            string vote_to = vote.states[i];
            if(vote_to.empty())
                break;
            if(!getByState(vote_to) || voter_state == vote_to)
                continue;
            counter++;
            if(i ==0)
                getByState(vote_to)->judge_votes += 12;
            else if(i == 1)
                getByState(vote_to)->judge_votes += 10;
            else if(i == 2)
                getByState(vote_to)->judge_votes += 8;
            else
                getByState(vote_to)->judge_votes += 10-i;
        }
        if(counter)
            ++(vote.voter);
    }
    return *this;
}

int MainControl::get_state_index(const string& state) const {
    int i=0;
    for(;i<participant_counter;i++) {
        string cur_string = participant_array[i].participant->state();
        if (cur_string.compare(state) >= 0)
            return i;
    }
    return i;
}

void MainControl::shift(int i, Direction d) {
    if(d==Right){
        for(int idx=max_number_of_participants-1; idx>i; idx--){
            ParticipantWithVotes::swap(participant_array[idx], participant_array[idx-1]);
        }
    }
    if(d==Left){
        for(int idx=i; idx<max_number_of_participants-1; idx++){
            ParticipantWithVotes::swap(participant_array[idx], participant_array[idx+1]);
        }
    }
}

MainControl::Iterator::Iterator(int init, MainControl::ParticipantWithVotes *pwd):
        i(init), participant_arr(pwd)
{}

MainControl::Iterator &MainControl::Iterator::operator++() {
    i++;
    return *this;
}

Participant& MainControl::Iterator::operator*() const {
    return *(participant_arr[i].participant);
}

bool MainControl::Iterator::operator==(
        const MainControl::Iterator &iterator) const {
    return (this->i == iterator.i &&
            this->participant_arr == iterator.participant_arr);
}

bool MainControl::Iterator::operator<(
        const MainControl::Iterator &iterator) const {
    return (this->i < iterator.i);
}

MainControl::Iterator MainControl::begin() const {
    return MainControl::Iterator(0,participant_array);
}

MainControl::Iterator MainControl::end() const {
    return MainControl::Iterator(participant_counter,participant_array);
}


class Pair : public std::pair<string, int>{
public:
    Pair(string state, int votes) : pair(state, votes) {}
    bool operator<(Pair &pair) const {
        if(this->second==pair.second)
            return this->first.compare(pair.first);
        return this->second<pair.second;
    }
    bool operator>(Pair &pair) const {
        return (!(*this < pair));
    }
};

template <class T, class Container>
T get(int i, Container container) {
    if(i>container.size() || i<=0)
        return *container.end();
    T min = *container.begin();
    for (auto j = container.begin(); j < container.end(); j++) {
        if (*j < min)
            min = *j;
    }
    T max = min, global_max = min;
    for(int times = 0; times < i; times++) {
        max = min;
        for (auto j = container.begin(); j < container.end(); j++) {
            if (*j > max && (times==0 || *j < global_max))
                max = *j;
        }
        global_max = max;
    }
    return max;
}


string MainControl::operator()(int location, VoterType type) {
    vector<Pair> votes;
    for(Iterator i = begin();i<end();++i){
        Participant& p= *i;
        MainControl::ParticipantWithVotes* pwd = getByState(p.state());
        int result;
        if(type == Regular)
            result= pwd->regular_votes;
        else if(type == Judge)
            result= pwd->judge_votes;
        else if (type == All)
            result = pwd->regular_votes + pwd->judge_votes;
        votes.push_back(Pair(p.state(), result));
    }
    Pair winner = get<Pair, vector<Pair>>(location,votes);
    return winner.first;
}


