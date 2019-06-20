#include <iostream>
#include <string>
using std::string;
using std::exception;


// ---------------------------------------------
class NoPrice
{
};

// ---------------------------------------------
class Seat
{
    int line;
    int chair;
    int base_price;
public:
    //TODO: const?
    Seat(int line, int chair, int basePrice);
    virtual ~Seat()= default;
    Seat(const Seat& s) = delete;
    Seat &operator=(const Seat& s) = delete;
    virtual string location() = 0;
    virtual int price() = 0;
};

// ---------------------------------------------
class GreenRoomSeat
{
};

// ---------------------------------------------
class MainHallSeat: public Seat
{
public:
    MainHallSeat(int line, int chair, int basePrice);
    ~MainHallSeat() override = default;
};

// ---------------------------------------------
class SpecialSeat
{
};

// ---------------------------------------------
class GoldenCircleSeat
{
};

// ---------------------------------------------
class DisablePodiumSeat
{
};

// ---------------------------------------------
class RegularSeat : public MainHallSeat
{
    char area;
public:
    RegularSeat(char area, int line, int chair, int basePrice);
    ~RegularSeat() override = default;
};

// ---------------------------------------------
class FrontRegularSeat : public RegularSeat
{
public:
    FrontRegularSeat(char area, int line, int chair, int basePrice);
    ~FrontRegularSeat() override = default;
    string location();
};

// ---------------------------------------------
class MiddleRegularSeat : public RegularSeat
{
public:
    MiddleRegularSeat(char area, int line, int chair, int basePrice);
    ~MiddleRegularSeat() override = default;
    string location();
};

// ---------------------------------------------
class RearRegularSeat : public RegularSeat
{
public:
    RearRegularSeat(char area, int line, int chair, int basePrice);
    ~RearRegularSeat() override = default;
    string location();
};

// ---------------------------------------------
