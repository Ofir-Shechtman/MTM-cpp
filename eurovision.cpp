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