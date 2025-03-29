#include <iostream>
#include "Triad.h"
#include "FuzzyNumber.h"

using namespace std;

int main() {
    Triad t1, t2;

    cout << "Enter first triad (first, second, third): ";
    cin >> t1;

    cout << "Enter second triad (first, second, third): ";
    cin >> t2;

    cout << "First triad: " << t1 << endl;
    cout << "Second triad: " << t2 << endl;

    if (t1 > t2) {
        cout << "First triad is greater than second triad." << endl;
    }
    else if (t1 < t2) {
        cout << "First triad is smaller than second triad." << endl;
    }
    else {
        cout << "Both triads are equal." << endl;
    }

    FuzzyNumber fn1(5.0, 1.0, 2.0);
    FuzzyNumber fn2;
    cout << "Enter values for FuzzyNumber (x, l, r): ";
    cin >> fn2;

    cout << "FuzzyNumber 1: " << fn1 << endl;
    cout << "FuzzyNumber 2: " << fn2 << endl;

    FuzzyNumber sum = fn1 + fn2;
    cout << "Sum: " << sum << endl;

    FuzzyNumber prod = fn1 * fn2;
    cout << "Product: " << prod << endl;

    return 0;
}
