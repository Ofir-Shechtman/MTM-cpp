#include <iostream>

#ifndef RATIONAL_H
#define RATIONAL_H


class Rational {
    int numerator, denominator;
    void simplify();
    static int gcd(int x, int y);
public:
    explicit Rational (int numerator = 0, int denominator = 1);
    explicit operator double() const;
    Rational operator-() const;
    Rational operator-(const Rational& r) const;
    Rational operator+(const Rational& r) const;
    Rational& operator+=(const Rational&);
    Rational& operator-=(const Rational&);
    //Rational& operator*=(const Rational&);
    //Rational& operator/=(const Rational&);
    friend bool operator==(const Rational&, const Rational&);
    //friend bool operator<(const Rational&, const Rational&);
    friend std::ostream& operator<<(std::ostream&, const Rational&);
};

//Rational operator+(const Rational&, const Rational&);
Rational operator-(const Rational&, const Rational&);
Rational operator*(const Rational&, const Rational&);
Rational operator/(const Rational&, const Rational&);
bool operator!=(const Rational&, const Rational&);
bool operator>=(const Rational&, const Rational&);
bool operator>(const Rational&, const Rational&);
bool operator<=(const Rational&, const Rational&);


#endif //RATIONAL_H
