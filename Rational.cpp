#include "Rational.h"

int Rational::gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

void Rational::simplify() {
    if (denominator < 0) {
        denominator = -denominator;
        numerator = -numerator;
    }
    int common = gcd(numerator, denominator);
    if (common != 0) {
        numerator /= common;
        denominator /= common;
    }
}

Rational::Rational(int numerator, int denominator) :
        numerator(numerator), denominator(denominator) {
    /*if (denominator == 0) {
        throw DivisionByZero();
    }*/
    simplify();
}

Rational::operator double() const {
    return double(numerator) / denominator;
}

Rational Rational::operator-() const {
    return Rational(-numerator, denominator);
}

Rational& Rational::operator+=(const Rational& r) {
    numerator = numerator * r.denominator + r.numerator * denominator;
    denominator = denominator * r.denominator;
    simplify();
    return *this;
}
Rational Rational::operator+(const Rational& r) const {
    Rational result(*this);
    return (result += r);
}

Rational& Rational::operator-=(const Rational& r) {
    return *this += -r;
}

Rational Rational::operator-(const Rational& r) const {
    return Rational(*this) -= r;
}

bool operator==(const Rational& r1, const Rational& r2) {
    return r1.numerator == r2.numerator && r1.denominator == r2.denominator;
}

std::ostream& operator<<(std::ostream& os, const Rational& r) {
    os << r.numerator;
    if (r.denominator != 1) {
        os << "/" << r.denominator;
    }
    return os;
}