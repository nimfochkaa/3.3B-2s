#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triad {
private:
    double first, second, third;

public:
    Triad();
    Triad(double first, double second, double third);
    Triad(const Triad& other);

    double getFirst() const;
    double getSecond() const;
    double getThird() const;

    void setFirst(double value);
    void setSecond(double value);
    void setThird(double value);

    bool operator>(const Triad& other) const;
    bool operator<(const Triad& other) const;
    bool operator==(const Triad& other) const;
    bool operator!=(const Triad& other) const;
    bool operator>=(const Triad& other) const;
    bool operator<=(const Triad& other) const;

    friend ostream& operator<<(ostream& out, const Triad& t);
    friend istream& operator>>(istream& in, Triad& t);
};