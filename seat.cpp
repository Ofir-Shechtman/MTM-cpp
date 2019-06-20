#include "seat.h"

Seat::Seat(int line, int chair, int basePrice)
    : line(line), chair(chair), base_price(basePrice) {}

MainHallSeat::MainHallSeat(int line, int chair, int basePrice)
    : Seat(line, chair, basePrice+100) {}

RegularSeat::RegularSeat(char area, int line, int chair, int basePrice)
    : area(area), MainHallSeat(line, chair, basePrice) {}

FrontRegularSeat::FrontRegularSeat(char area, int line, int chair, int basePrice)
    : RegularSeat(area, line, chair, basePrice+500) {}

MiddleRegularSeat::MiddleRegularSeat(char area, int line, int chair, int basePrice)
    : RegularSeat(area, line, chair, basePrice+250) {}

RearRegularSeat::RearRegularSeat(char area, int line, int chair, int basePrice)
    : RegularSeat(area, line, chair, basePrice) {}