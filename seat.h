#include <iostream>
#include <string>
#include <stdexcept>
using std::string;
using std::exception;
using std::runtime_error;


// ---------------------------------------------
class NoPrice : public runtime_error
{
public:
    NoPrice();
};

// ---------------------------------------------
class Seat
{
    int line;
    int chair;
    int base_price;
protected:
    string getLocation(const string class_name, char area = 0) const;
public:
    //TODO: const?
    Seat(int line, int chair, int basePrice);
    virtual ~Seat()= default;
    virtual string location() const =0;
    virtual int price() const;
};

// ---------------------------------------------
class GreenRoomSeat : public Seat
{
public:
    GreenRoomSeat(int line, int chair);
    ~GreenRoomSeat() override = default;
    string location() const override;
    int price() const override;
};

// ---------------------------------------------
class MainHallSeat : public Seat
{
public:
    MainHallSeat(int line, int chair, int basePrice);
    virtual ~MainHallSeat() override = default;
};

// ---------------------------------------------
class SpecialSeat : public MainHallSeat
{
public:
    SpecialSeat(int line, int chair, int basePrice);
    virtual ~SpecialSeat() override = default;
};

// ---------------------------------------------
class GoldenCircleSeat : public SpecialSeat
{
public:
    GoldenCircleSeat(int line, int chair, int basePrice);
    ~GoldenCircleSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
class DisablePodiumSeat : public SpecialSeat
{
public:
    DisablePodiumSeat(int line, int chair, int basePrice=0);
    ~DisablePodiumSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
class RegularSeat : public MainHallSeat
{
protected:
    char area;
public:
    RegularSeat(char area, int line, int chair, int basePrice);
    virtual ~RegularSeat() override = default;
};

// ---------------------------------------------
class FrontRegularSeat : public RegularSeat
{
public:
    FrontRegularSeat(char area, int line, int chair, int basePrice);
    ~FrontRegularSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
class MiddleRegularSeat : public RegularSeat
{
public:
    MiddleRegularSeat(char area, int line, int chair, int basePrice);
    ~MiddleRegularSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
class RearRegularSeat : public RegularSeat
{
public:
    RearRegularSeat(char area, int line, int chair, int basePrice);
    ~RearRegularSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
