#include <iostream>
#include "eurovision.h"

Participant::Participant(const Participant &p) {

}

MainControl::MainControl(const int max_time_length,
            const int max_number_of_participants,
            const int max_times_voter) :
            max_time_length(max_time_length),
            max_number_of_participants(max_number_of_participants),
            max_times_voter(max_times_voter),
            phase(Registration)
            {
    states= new ParticipantWithVotes[max_number_of_participants];
}

MainControl::~MainControl(){
    delete[] participants;
}