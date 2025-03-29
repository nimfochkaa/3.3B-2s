#include "FuzzyNumber.h"

FuzzyNumber::FuzzyNumber() : x(0), l(0), r(0) {}
FuzzyNumber::FuzzyNumber(double x, double l, double r) : x(x), l(l), r(r) {}
FuzzyNumber::FuzzyNumber(const FuzzyNumber& other) : x(other.x), l(other.l), r(other.r) {}

double FuzzyNumber::getX() const { return x; }
double FuzzyNumber::getL() const { return l; }
double FuzzyNumber::getR() const { return r; }

void FuzzyNumber::setX(double value) { x = value; }
void FuzzyNumber::setL(double value) { l = value; }
void FuzzyNumber::setR(double value) { r = value; }

FuzzyNumber& FuzzyNumber::operator=(const FuzzyNumber& other) {
    if (this != &other) {
        x = other.x;
        l = other.l;
        r = other.r;
    }
    return *this;
}

FuzzyNumber FuzzyNumber::operator+(const FuzzyNumber& other) const {
    return FuzzyNumber(x + other.x - l - other.l, x + other.x, x + other.x + r + other.r);
}

FuzzyNumber FuzzyNumber::operator*(const FuzzyNumber& other) const {
    return FuzzyNumber(x * other.x - other.x * l - x * other.l - l * other.l, x * other.x, x * other.x + other.x + other.x * r + x * other.r + r * other.r);
}

FuzzyNumber& FuzzyNumber::operator++() {
    x++;
    return *this;
}

FuzzyNumber FuzzyNumber::operator++(int) {
    FuzzyNumber temp = *this;
    x++;
    return temp;
}

FuzzyNumber& FuzzyNumber::operator--() {
    x--;
    return *this;
}

FuzzyNumber FuzzyNumber::operator--(int) {
    FuzzyNumber temp = *this;
    x--;
    return temp;
}

bool FuzzyNumber::operator>(const FuzzyNumber& other) const {
    return (x > other.x) || (x == other.x && l > other.l) || (x == other.x && l == other.l && r > other.r);
}

bool FuzzyNumber::operator<(const FuzzyNumber& other) const {
    return !(*this > other) && *this != other;
}

bool FuzzyNumber::operator==(const FuzzyNumber& other) const {
    return x == other.x && l == other.l && r == other.r;
}

bool FuzzyNumber::operator!=(const FuzzyNumber& other) const {
    return !(*this == other);
}

ostream& operator<<(ostream& out, const FuzzyNumber& fn) {
    out << "(" << (fn.x - fn.l) << ", " << fn.x << ", " << (fn.x + fn.r) << ")";
    return out;
}

istream& operator>>(istream& in, FuzzyNumber& fn) {
    in >> fn.x >> fn.l >> fn.r;
    return in;
}
