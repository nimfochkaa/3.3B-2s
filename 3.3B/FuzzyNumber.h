#pragma once
#include <iostream>
#include <string>

using namespace std;

class FuzzyNumber {
private:
    double x, l, r;

public:
    FuzzyNumber();
    FuzzyNumber(double x, double l, double r);
    FuzzyNumber(const FuzzyNumber& other);

    double getX() const;
    double getL() const;
    double getR() const;

    void setX(double value);
    void setL(double value);
    void setR(double value);

    FuzzyNumber& operator=(const FuzzyNumber& other);
    FuzzyNumber operator+(const FuzzyNumber& other) const;
    FuzzyNumber operator*(const FuzzyNumber& other) const;

    FuzzyNumber& operator++();    
    FuzzyNumber operator++(int);   
    FuzzyNumber& operator--();     
    FuzzyNumber operator--(int);   

    bool operator>(const FuzzyNumber& other) const;
    bool operator<(const FuzzyNumber& other) const;
    bool operator==(const FuzzyNumber& other) const;
    bool operator!=(const FuzzyNumber& other) const;

    friend ostream& operator<<(ostream& out, const FuzzyNumber& fn);
    friend istream& operator>>(istream& in, FuzzyNumber& fn);
};
