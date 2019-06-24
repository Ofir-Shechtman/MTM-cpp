#ifndef HW3_SEAT_H
#define HW3_SEAT_H

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
/**
 * abstract class
 */
class Seat
{
    int line;
    int chair;
    int base_price;
protected:
    /**
     * get the location string format by given params
     * @param class_name
     * @param area
     * @return string as described in the PDF.
     */
    string getLocation(const string class_name, char area = 0) const;
public:
    Seat(int line, int chair, int basePrice);
    virtual ~Seat()= default;
    /**
     * @return the location string of the class
     */
    virtual string location() const =0;
    /**
     * @return class price(int)
     */
    virtual int price() const;
};

// ---------------------------------------------
/**
 * inherit from Seat, not containe price
 */
class GreenRoomSeat : public Seat
{
public:
    GreenRoomSeat(int line, int chair);
    ~GreenRoomSeat() override = default;
    string location() const override;
    /**
     * this function will throw NoPrice exeption
     */
    int price() const override;
};

// ---------------------------------------------
/**
 * abstract class
 * inherit from Seat, price is increase the basic price by 100
 */
class MainHallSeat : public Seat
{
protected:
    MainHallSeat(int line, int chair, int basePrice);
public:
    virtual ~MainHallSeat() override = default;
};

// ---------------------------------------------
/**
 * abstract class
 * inherit from MainHallSeat, price is increase the basic price by 300
 */
class SpecialSeat : public MainHallSeat
{
protected:
    SpecialSeat(int line, int chair, int basePrice);
public:
    virtual ~SpecialSeat() override = default;
};

// ---------------------------------------------
/**
 * inherit from SpecialSeat, price is increase the basic price by 1000
 */
class GoldenCircleSeat : public SpecialSeat
{
public:
    GoldenCircleSeat(int line, int chair, int basePrice);
    ~GoldenCircleSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
/**
 * inherit from SpecialSeat, price is 200
 */
class DisablePodiumSeat : public SpecialSeat
{
public:
    DisablePodiumSeat(int line, int chair, int basePrice=0);
    ~DisablePodiumSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
/**
 * abstract class
 * inherit from SpecialSeat
 */
class RegularSeat : public MainHallSeat
{
protected:
    char area;
    RegularSeat(char area, int line, int chair, int basePrice);
public:
    virtual ~RegularSeat() override = default;
};

// ---------------------------------------------
/**
 * inherit from RegularSeat, price is increase the basic price by 500
 */
class FrontRegularSeat : public RegularSeat
{
public:
    FrontRegularSeat(char area, int line, int chair, int basePrice);
    ~FrontRegularSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
/**
 * inherit from RegularSeat, price is increase the basic price by 250
 */
class MiddleRegularSeat : public RegularSeat
{
public:
    MiddleRegularSeat(char area, int line, int chair, int basePrice);
    ~MiddleRegularSeat() override = default;
    string location() const override;
};

// ----------------------------------ֺֺ-----------
/**
 * inherit from RegularSeat
 */
class RearRegularSeat : public RegularSeat
{
public:
    RearRegularSeat(char area, int line, int chair, int basePrice);
    ~RearRegularSeat() override = default;
    string location() const override;
};

// ---------------------------------------------
#endif //HW3_SEAT_H