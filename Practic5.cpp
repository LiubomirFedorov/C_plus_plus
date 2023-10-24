#include <iostream>
#include <iomanip> 
#include <cmath>


using namespace std;

void ex1()
{
    for (int i = 0; i < 5; i++) {
        int x;
        cout << "Enter an x: ";
        cin >> x;
        double y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << y << endl;
    }
}

void ex2()
{
        int sum = 0;

        for (int i = 1; i <= 25; i++) {
            sum += i * i;
        }

        cout << "The sum of the squares of numbers from 1 to 25: " << sum << endl;

}

void ex3()
{
    double a, b, h;

    cout << "Enter the beginning: ";
    cin >> a;
    cout << "Enter the end: ";
    cin >> b;
    cout << "Enter the step: ";
    cin >> h;

    cout << "-------------------" << endl;
    cout << "    X   :     Y    " << endl;
    cout << "-------------------" << endl;

    auto f = [](double x) -> double {
        return sqrt(cos(x)) + sin(x);
        };

    for (double x = a; x <= b; x += h) {
        double y = f(x);


        if (y != y) {
            cout << "Number x = " << x << " is not within the function" << endl;
            break;
        }

        cout << setw(8) << fixed << setprecision(2) << x << " : " << setw(8) << fixed << setprecision(2) << y << endl;
    }

    cout << "-------------------" << endl;
}

int main()
{
    ex2();
}