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
    virtual location();
    virtual price();
};

// ---------------------------------------------
class GreenRoomSeat
{
};

// ---------------------------------------------
class MainHallSeat
{
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
class RegularSeat
{
};

// ---------------------------------------------
class FrontRegularSeat
{
};

// ---------------------------------------------
class MiddleRegularSeat
{
};

// ---------------------------------------------
class RearRegularSeat
{
};

// ---------------------------------------------
