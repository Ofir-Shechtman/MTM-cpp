#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>
// it's allowed to define here any using statements, according to needs.
// do NOT define here : using namespace std;
using std::string;
using std::ostream;
using std::endl;
//---------------------------------------------------

enum VoterType { All, Regular, Judge };
enum Phase { Registration, Contest, Voting };

//---------------------------------------------------

class Participant
{
    const string state_name;
    string song_name;
    int song_length;
    string singer_name;
    bool is_registered;

public:
    Participant(const string state, const string song,
                const int timeLength, const string singer);
    ~Participant() = default;
    Participant(const Participant& p) = delete;
    Participant &operator=(const Participant& p) = delete;
    const string state() const;
    string song() const;
    int timeLength() const;
    string singer() const;
    bool isRegistered() const;
    void update(const string song, const int timeLength, const string singer);
    void updateRegistered(bool flag);
};

//---------------------------------------------------


class Voter
{
    const string state_name;
    const VoterType type;
    int times_voted;
public :
    explicit Voter(const string state, const VoterType type = Regular);
    //TODO: Ask about next 2 lines
    Voter(const Voter& voter);
    Voter &operator=(const Voter& voter) = default;
    ~Voter() = default;
    Voter& operator++();
    const string state() const;
    VoterType voterType() const;
    int timesOfVotes() const;
};


// -----------------------------------------------------------

struct Vote
{
    Voter& voter;
    string* states;
    Vote(Voter& voter, const string state0,
                            const string state1 = "", const string state2 = "",
                            const string state3 = "", const string state4 = "",
                            const string state5 = "", const string state6 = "",
                            const string state7 = "", const string state8 = "",
                            const string state9 = "");
    Vote(const Vote& vote);
    Vote &operator=(const Vote& vote) = delete;
    ~Vote();
};


struct ParticipantWithVotes{
    Participant* participant;
    int regular_votes;
    int judge_votes;
    explicit ParticipantWithVotes(Participant* participant=NULL,
                   const int regular_votes=0, const int judge_votes=0);
    ~ParticipantWithVotes() = default;
};

// -----------------------------------------------------------

class MainControl
{
    const int max_time_length;
    const int max_number_of_participants;
    const int max_times_voter;
    Phase phase;
    ParticipantWithVotes* participant_array;
    ParticipantWithVotes* getByState(string state) const;
public :
    explicit MainControl(const int max_time_length = 180,
                         const int max_number_of_participants = 26,
                         const int max_times_voter = 5);
    MainControl(const MainControl &contest) = delete;
    MainControl &operator=(const MainControl &contest) = delete;
    ~MainControl();
    void setPhase(Phase new_phase);
    bool participate(string participant_name);
    bool legalParticipant(Participant& p);
    MainControl &operator+=(Participant& p);
    MainControl &operator-=(Participant& p);
    MainControl &operator+=(Vote vote);
    friend ostream &operator<<(ostream &os, const MainControl &mc);

};

ostream &operator<<(ostream &os, const Participant &p);
ostream &operator<<(ostream &os, const Voter &voter);
ostream &operator<<(ostream &os, const MainControl &mc);
// -----------------------------------------------------------

#endif
