#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>
// it's allowed to define here any using statements, according to needs.
// do NOT define here : using namespace std;
using std::string;
using std::ostream;
//---------------------------------------------------

enum VoterType { All, Regular, Judge };
enum Phase { Registration, Contest, Voting };

//---------------------------------------------------

class Participant
{
    const string state;
    string song;
    int timeLength;
    string singer;
    bool isRegistered;
    int regular_votes;
    int judge_votes;

public:
    Participant(const string state, const string song,
                const int song_length, const string singer);
    ~Participant() = default;
    Participant(const Participant& p) = delete;
    Participant &operator=(const Participant& p) = delete;
    const string state() const;
    string song() const;
    int timeLength() const;
    string singer() const;
    bool isRegistered() const;
    void update(const string song, const int song_length, const string singer);
    void updateRegistered(bool flag);
};

//---------------------------------------------------


class Voter
{
    const string state;
    const VoterType type;
    int timesOfVotes;
public :
    explicit Voter(const string state, const VoterType type = Regular);
    //TODO: Ask about next 2 lines
    Voter(const Voter& voter) = delete;
    Voter &operator=(const Voter& voter) = delete;
    ~Voter() = default;
    Voter& operator++();
    const string state() const;
    VoterType voterType() const;
    int timesOfVotes() const;
};


// -----------------------------------------------------------

struct Vote
{
    Voter voter;
    string state[10];
    Vote(const Voter& voter, const string state0,
                            const string state1 = NULL, const string state2 = NULL,
                            const string state3 = NULL, const string state4 = NULL,
                            const string state5 = NULL, const string state6 = NULL,
                            const string state7 = NULL, const string state8 = NULL,
                            const string state9 = NULL);
    Vote(const Vote& vote) = delete;
    Vote &operator=(const Vote& vote) = delete;
    ~Vote() = default;

// ALL is public here.
// need to define ONLY data members and c'tr and d'tr.
// NO NEED to define anything else.

};

// -----------------------------------------------------------


class MainControl
{
    const int max_time_length;
    const int max_number_of_participants;
    const int max_times_voter;
    Phase phase;
    *(Participant&)
    array;

public :
    explicit MainControl(const int max_time_length = 180,
                         const int max_number_of_participants = 26,
                         const int max_times_voter = 5);
    MainControl(const MainControl &contest) = delete;
    MainControl &operator=(const MainControl &contest) = delete;
    ~MainControl() = default;
    void setPhase(Phase);
    bool participate(Participant p);
    bool legalParticipant(Participant p);
    MainControl &operator+=(Participant &p);
    MainControl &operator-=(Participant &p);
    MainControl &operator+=(Voter &voter);

};

ostream &operator<<(ostream &os, const Participant &p);
ostream &operator<<(ostream &os, const Voter &p);
ostream &operator<<(ostream &os, const MainControl &p);
// -----------------------------------------------------------

#endif
