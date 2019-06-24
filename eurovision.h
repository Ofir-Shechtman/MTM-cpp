#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>
#include <vector>

// it's allowed to define here any using statements, according to needs.
// do NOT define here : using namespace std;
using std::string;
using std::vector;
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
    /**
     * @return state_name
     */
    const string state() const;
    /**
     * @return state_name
     */
    string song() const;
    /**
     * @return song_name
     */
    int timeLength() const;
    /**
     * @return song_length
     */
    string singer() const;
    /**
    * @return is_registered
    */
    bool isRegistered() const;
    /**
     * update the attributes of song_name, song_length and singer_name
     * @param song
     * @param timeLength
     * @param singer
     */
    void update(string song, int timeLength, string singer);
    /**
     * update the is_registered attribute({True,False})
     * @param flag
     */
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
    /**
     * increments times_voted by 1
     */
    Voter& operator++();
    /**
     * @return state_name
     */
    const string state() const;
    /**
     * @return type
     */
    VoterType voterType() const;
    /**
     * @return times_voted
     */
    int timesOfVotes() const;
};


// -----------------------------------------------------------

struct Vote
{
    Voter& voter;
    string* states;
    /**
     * @param voter
     * @param state0  -  the only state in regular vote, and no.1 state in
     * judge votes
     * @param state1-9  -  places 2-10 in judge votes
     */
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
    /**
     * include a pointer to registered participant, sum of his regular votes,
     * and sum of his judge votes
     */
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

    /**
     * @param state name
     * @return the index of the state in the participants array
     */
    int get_state_index(const string& state) const;
    /**
     * shifts the participants array left of right
     * for example
     * {*,*,*,NULL,*,*} shifting this array left with
     * index 3 will do{*,*,*,*,*,*,NULL}
     * @param i
     * @param d
     */
    void shift(int i, Direction d);
    /**
     * array of all registered participants
     */
    ParticipantWithVotes* participant_array;
    int participant_counter;
    /**
     * @param state
     * @return pointer to participant with votes in the participants array
     */
    ParticipantWithVotes* getByState(string state) const;
public :
    explicit MainControl(int max_time_length = 180,
                         int max_number_of_participants = 26,
                         int max_times_voter = 5);
    MainControl(const MainControl &contest) = delete;
    MainControl &operator=(const MainControl &contest) = delete;
    ~MainControl();
    /**
     * setting the phase in the conditions as described in the PDF
     * @param new_phase
     */
    void setPhase(Phase new_phase);
    /**
     * @param participant_name
     * @return if the participant is registered
     */
    bool participate(string participant_name);
    /**
     * @param p
     * @return if the participant is can be registered
     */
    bool legalParticipant(Participant& p);
    /**
     * register a participant to the contest
     * @param p
     */
    MainControl &operator+=(Participant& p);
    /**
     * unregister a participant to the contest
     * @param p
     */
    MainControl &operator-=(Participant& p);
    /**
     * adding vote to participant
     * @param vote
     */
    MainControl &operator+=(Vote vote);
    friend ostream &operator<<(ostream &os, const MainControl &mc);
    class Iterator{
        int i;
        ParticipantWithVotes* participant_arr;
    public:
        Iterator(int init = 0, ParticipantWithVotes* pwd = nullptr);
        ~Iterator()= default;
        Iterator &operator=(const Iterator &iterator) = default;
        Iterator& operator++();
        Participant& operator*() const;
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

template <class Iterator>
Iterator get(int i, Iterator begin, Iterator end);
// -----------------------------------------------------------

#endif

