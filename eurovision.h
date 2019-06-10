#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>
//Marcus #1!
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

    Participant(const Participant &p) = delete;

    Participant &operator=(const Participant &p) = delete;

    friend ostream &operator<<(ostream &os, const Participant &p);

    const string state() const;

    string song() const;

    int timeLength() const;

    string singer() const;

    bool isRegistered() const;

    void update(const string song, const int song_length, const string singer);

    void updateRegistered(bool flag);

    void updateRegistrationPhase(bool flag);
};

//---------------------------------------------------


class Voter
{
// relevant private members can be defined here, if necessary.

public :

// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// NO friend is allowed here.

};


// -----------------------------------------------------------

struct Vote
{

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
