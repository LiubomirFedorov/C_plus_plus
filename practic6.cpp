#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    int sum = 0;

    while (N > 0) {
        int digit = N % 10; 

        if (digit < 7) {
            sum += digit;
        }

        N /= 10; 
    }

    cout << "The sum of digits less than 7 in a number: " << sum << endl;

    return 0;
}