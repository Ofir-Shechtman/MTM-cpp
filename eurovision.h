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
    int regular_votes;
    int judge_votes;
    bool isRegistered;
    bool isRegistrationPhase;

public:
    Participant(const string state, const string song,
                const int song_length, const string singer);
    ~Participant() = default;
    Participant(const Participant& p) = delete;
    Participant &operator=(const Participant& p) = delete;
    //friend ostream &operator<<(ostream &os, const Participant &p);
    const string state() const;
    string song() const;
    int timeLength() const;
    string singer() const;
    bool isRegistered() const;
    void update(const string song, const int song_length, const string singer);
    void updateRegistered(bool flag);
    //void updateRegistrationPhase(bool flag);
};

//---------------------------------------------------


class Voter
{
    const string state;
    VoterType type;
    int timesOfVotes;
public :
    explicit Voter(const string state, const VoterType type = Regular);
    //TODO: Ask about next 2 lines
    Voter(const Voter& voter) = delete;
    Voter &operator=(const Voter& voter) = delete;
    ~Voter() = default;
    //friend ostream &operator<<(ostream &os, const Participant &p);
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
// relevant private members can be defined here, if necessary.

public :

// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// Also it's allowed here to define friend.

};

// -----------------------------------------------------------

#endif
