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

Vote::Vote(const Voter& voter, const string state0,
           const string state1, const string state2,
           const string state3, const string state4,
           const string state5 , const string state6,
           const string state7 , const string state8,
           const string state9 ): voter(voter){
    states = new string[10];
    states[0] = state0;
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