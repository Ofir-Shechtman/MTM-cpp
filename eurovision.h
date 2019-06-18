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
enum Direction { Left, Right };

//---------------------------------------------------

class Participant
{
    const string state_name;
    string song_name;
    int song_length;
    string singer_name;
    bool is_registered;

public:
    Participant(string state, string song,
                int timeLength, string singer);
    ~Participant() = default;
    Participant(const Participant& p) = delete;
    Participant &operator=(const Participant& p) = delete;
    const string state() const;
    string song() const;
    int timeLength() const;
    string singer() const;
    bool isRegistered() const;
    void update(string song, int timeLength, string singer);
    void updateRegistered(bool flag);
};

//---------------------------------------------------


class Voter
{
    const string state_name;
    const VoterType type;
    int times_voted;
public :
    explicit Voter(string state, VoterType type = Regular);
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
    Voter& voter;
    string* states;
    Vote(Voter& voter, string state0,
         string state1 = "", string state2 = "",
         string state3 = "", string state4 = "",
         string state5 = "", string state6 = "",
         string state7 = "", string state8 = "",
         string state9 = "");
    Vote(const Vote& vote);
    Vote &operator=(const Vote& vote) = delete;
    ~Vote();
};




// -----------------------------------------------------------

class MainControl
{
    const int max_time_length;
    const int max_number_of_participants;
    const int max_times_voter;
    Phase phase;
    struct ParticipantWithVotes{
        Participant* participant;
        int regular_votes;
        int judge_votes;
        explicit ParticipantWithVotes(Participant* participant= nullptr);
        ~ParticipantWithVotes() = default;
        ParticipantWithVotes &operator=(const ParticipantWithVotes &pwv) = default;
        ParticipantWithVotes(const ParticipantWithVotes &pwv) = default;
        static void swap(ParticipantWithVotes& a, ParticipantWithVotes& b);
    };
    int get_state_index(const string& state) const;
    void shift(int i, Direction d);
    ParticipantWithVotes* participant_array;
    int participant_counter;
    ParticipantWithVotes* getByState(string state) const;
public :
    explicit MainControl(int max_time_length = 180,
                         int max_number_of_participants = 26,
                         int max_times_voter = 5);
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
    class Iterator{
        int i;

    public:
        Iterator()= default;
        ~Iterator()= default;
        Iterator &operator=(const Iterator &iterator) = default;
        Iterator& operator++();
        const string operator*() const;
        bool operator==(const Iterator &iterator) const;
        bool operator<(const Iterator &iterator) const;
    };
    Iterator begin() const;
    Iterator end() const;
    string operator()(int location, VoterType type);
};

ostream &operator<<(ostream &os, const Participant &p);
ostream &operator<<(ostream &os, const Voter &voter);
ostream &operator<<(ostream &os, const MainControl &mc);
// -----------------------------------------------------------

#endif
