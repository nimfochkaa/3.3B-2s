#include "Triad.h"

Triad::Triad() : first(0), second(0), third(0) {}
Triad::Triad(double first, double second, double third) : first(first), second(second), third(third) {}
Triad::Triad(const Triad& other) : first(other.first), second(other.second), third(other.third) {}

double Triad::getFirst() const { return first; }
double Triad::getSecond() const { return second; }
double Triad::getThird() const { return third; }

void Triad::setFirst(double value) { first = value; }
void Triad::setSecond(double value) { second = value; }
void Triad::setThird(double value) { third = value; }

bool Triad::operator>(const Triad& other) const {
    if (first > other.first) return true;
    if (first == other.first && second > other.second) return true;
    if (first == other.first && second == other.second && third > other.third) return true;
    return false;
}

bool Triad::operator<(const Triad& other) const {
    return !(*this > other) && *this != other;
}

bool Triad::operator==(const Triad& other) const {
    return first == other.first && second == other.second && third == other.third;
}

bool Triad::operator!=(const Triad& other) const {
    return !(*this == other);
}

bool Triad::operator>=(const Triad& other) const {
    return *this > other || *this == other;
}

bool Triad::operator<=(const Triad& other) const {
    return *this < other || *this == other;
}

ostream& operator<<(ostream& out, const Triad& t) {
    out << "(" << t.first << ", " << t.second << ", " << t.third << ")";
    return out;
}

istream& operator>>(istream& in, Triad& t) {
    in >> t.first >> t.second >> t.third;
    return in;
}
