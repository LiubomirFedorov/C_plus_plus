#include <iostream>
using namespace std;

void ex26() {
    int c0, steps = 0;

    cout << "Enter the natural number: ";
    cin >> c0;

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 /= 2;
        }
        else {
            c0 = 3 * c0 + 1;
        }
        cout << c0 << endl;
        steps++;
    }

    cout << "Number of steps: " << steps << endl;

}

void ex27() {
    double pi4 = 0.;
    long n;

    cout << "Enter the number of iterations: ";
    cin >> n;

    for (long i = 0; i < n; i++) {
        pi4 += (i % 2 == 0 ? 1 : -1) * (1. / (2 * i + 1));
    }

    pi4 *= 4.;

    cout.precision(20);
    cout << "Pi = " << pi4 << endl;
    }

void ex210() {
    int n;

    cout << "Enter a natural number greater than 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "Invalid value. Please enter a number greater than 1." << endl;
 
    }

    if (n >= 40) {
        cout << "Sorry, the side size is too big." << endl;
    }

    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;

    for (int i = 0; i < n; i++) {
        cout << '|';
        for (int j = 0; j < n; j++)
            cout << ' ';
        cout << '|' << endl;
    }

    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;
}

int main() 
{
    ex26();
}