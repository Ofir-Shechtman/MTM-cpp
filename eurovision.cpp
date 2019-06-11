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
        if (song != "") {
            song_name = song;
        }
        if (timeLength != 0) {
            song_length = timeLength;
        }
        if (singer != "") {
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
    os << "]" << endl;
    return os;
}

Voter::Voter(const string state, const VoterType type):
    state_name(state),
    type(type) {}
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
    os << "<";
    os << vr.state() << "/";
    os << vr.voterType();
    os << ">" << endl;
    return os;
}

Vote::Vote(const Voter& voter, const string state0,
           const string state1, const string state2,
           const string state3, const string state4,
           const string state5 , const string state6,
           const string state7 , const string state8,
           const string state9 ): voter(voter){
    states = new string[10];
    states[0] = state0;
    if(voter.voterType()==Judge) {
        states[1] = state1;
        states[2] = state2;
        states[3] = state3;
        states[4] = state4;
        states[5] = state5;
        states[6] = state6;
        states[7] = state7;
        states[8] = state8;
        states[9] = state9;
    }
}

Vote::~Vote() {
    delete[] states;
}

Vote::Vote(const Vote& vote):
    voter(vote.voter),
    states(new string[10])
{
    for(int i=0; i<10; i++){
        states[i]= vote.states[i];
    }
}

ParticipantWithVotes::ParticipantWithVotes(Participant* participant,
                              const int regular_votes, const int judge_votes):
regular_votes(regular_votes),
judge_votes(judge_votes),
participant(participant){};

MainControl::MainControl(const int max_time_length,
            const int max_number_of_participants,
            const int max_times_voter) :
            max_time_length(max_time_length),
            max_number_of_participants(max_number_of_participants),
            max_times_voter(max_times_voter),
            phase(Registration)
            {
    participant_array= new ParticipantWithVotes[max_number_of_participants];
}

MainControl::~MainControl(){
    delete[] participant_array;
}

void MainControl::setPhase(Phase new_phase){
    phase=new_phase;
}
bool MainControl::participate(string participant_name){
    return getByState(participant_name) != NULL;
}

MainControl& MainControl::operator+=(Participant& p){
    if(participate(p.state()) || !legalParticipant(p)) return *this;
    for(int i=0; i<max_number_of_participants; i++){
        if(participant_array[i].participant==NULL){
            participant_array[i].participant=&p;
            p.updateRegistered(true);
            break;
        }
    }
    return *this;
}

MainControl& MainControl::operator-=(Participant &p){
    for(int i=0; i<max_number_of_participants; i++){
        Participant* cur_p= participant_array[i].participant;
        if(cur_p!=NULL && cur_p->state() == p.state()){
            participant_array[i].participant =NULL;
            participant_array[i].judge_votes =0;
            participant_array[i].regular_votes =0;
            p.updateRegistered(false);
            break;
        }
    }
    return *this;
}

int findMaxIdx(string* strings, int n){
    string max ="";
    int max_idx = -1;
    for(int i=0; i<n; i++){
        if(strings[i].compare(max)>=0) {
            max = strings[i];
            max_idx = i;
        }
    }
    return max_idx;
}

void stringSort(string* strings, int n){
    for(int len=n; len>0; len--){
        int max_idx = findMaxIdx(strings,len);
        strings[max_idx].swap(strings[len-1]);
    }
}

ostream &operator<<(ostream &os, const MainControl &mc){
    /*
    {
    Registration
    [Australia/Song_Australia/180/Singer_Australia]
    [Cyprus/Song_Cyprus/172/Singer_Cyprus]
    [Israel/Song_Israel/175/Singer_Israel]
    [UK/Song_UK/170/Singer_UK]
    }
     */
    os << "{" << endl;
    string * states_names= new string[mc.max_number_of_participants];
    int counter=0;
    for(int i=0; i<mc.max_number_of_participants; i++){
        if(mc.participant_array[i].participant != NULL) {
            states_names[counter] = mc.participant_array[i].participant->state();
            counter++;
        }
    }
    stringSort(states_names,counter);
    for(int i=0; i<counter; i++) {
        os << *(mc.getByState(states_names[i])->participant);
    }
    delete[] states_names;
    os << "}" << endl;
    return os;
}

bool MainControl::legalParticipant(Participant& p){
    if(p.state() == "" || p.song() == "" || p.singer() == "") return false;
    if(p.timeLength() > max_time_length || p.timeLength()<=0) return false;
    return true;
}

ParticipantWithVotes* MainControl::getByState(string state) const{
    for(int i=0; i < max_number_of_participants; i++){
        Participant* cur_p = participant_array[i].participant;
        if (cur_p != NULL && cur_p->state() == state)
            return &participant_array[i];
    }
    return NULL;
}

MainControl& MainControl::operator+=(Vote vote){
    string voter_state = vote.voter.state();
    if (!getByState(voter_state))
        return *this;
    for(int i=0; i<10; i++){
        string cur_state = vote.states[i];
        if(cur_state.empty())
            break;
        if(voter_state == cur_state)
            return *this;
        if(!getByState(cur_state))
            return *this;
    }
    if(vote.voter.timesOfVotes() >= max_times_voter)
        return *this;

    ++vote.voter;
    if(vote.voter.voterType() == Regular){
        string vote_to = vote.states[0];
        getByState(vote_to)->regular_votes++;
    }
    if(vote.voter.voterType() == Judge){
        for(int i=0; i < 10; i++){
            string vote_to = vote.states[i];
            if(vote_to.empty())
                break;
            if(i ==0) getByState(vote_to)->judge_votes += 12;
            if(i == 1) getByState(vote_to)->judge_votes += 10;
            getByState(vote_to)->judge_votes += 10-i;
        }
    }
    return *this;
}
