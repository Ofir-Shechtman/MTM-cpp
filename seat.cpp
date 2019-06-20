#include "seat.h"

using std::to_string;
Seat::Seat(int line, int chair, int basePrice)
    : line(line), chair(chair), base_price(basePrice) {}

MainHallSeat::MainHallSeat(int line, int chair, int basePrice)
    : Seat(line, chair, basePrice+100) {}

RegularSeat::RegularSeat(char area, int line, int chair, int basePrice)
    : area(area), MainHallSeat(line, chair, basePrice) {}

string Seat::getLocation(const string class_name, char area) const {
    //Middle-> area: D, line: 30, chair: 15
    string result= class_name + "-> ";
    if(area)
        result+= "area: " + to_string(area) + ", ";
    result += "line: " + to_string(line) + " chair: " + to_string(chair);
    return result;
}


int Seat::price() const{
    return base_price;
}

GreenRoomSeat::GreenRoomSeat(int line, int chair):
    Seat(line, chair, 0) {}


string GreenRoomSeat::location() const{
    return getLocation("Green Room");
}

NoPrice::NoPrice() : runtime_error("Not For Sale !"){}

int GreenRoomSeat::price() const {
    throw NoPrice();
}

FrontRegularSeat::FrontRegularSeat(char area, int line, int chair, int basePrice)
    : RegularSeat(area, line, chair, basePrice+500) {}

string FrontRegularSeat::location() {
    return getLocation("Front",area);
}

MiddleRegularSeat::MiddleRegularSeat(char area, int line, int chair, int basePrice)
    : RegularSeat(area, line, chair, basePrice+250) {}

string MiddleRegularSeat::location() {
    return getLocation("Middle",area);
}

RearRegularSeat::RearRegularSeat(char area, int line, int chair, int basePrice)
    : RegularSeat(area, line, chair, basePrice) {}

string RearRegularSeat::location() {
    return getLocation("Rear",area);
}


SpecialSeat::SpecialSeat(int line, int chair, int basePrice):
    MainHallSeat(line, chair, basePrice) {}

GoldenCircleSeat::GoldenCircleSeat(int line, int chair, int basePrice)
        : SpecialSeat(line, chair, basePrice+1000) {}

string GoldenCircleSeat::location() const {
    return getLocation("Golden Circle");
}

DisablePodiumSeat::DisablePodiumSeat(int line, int chair, int basePrice)
        : SpecialSeat(line, chair, 200) {}

string DisablePodiumSeat::location() const {
    return getLocation("Golden Circle");
}

