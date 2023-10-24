// task 6
#include <iostream>
#include <string>
using namespace std;

int main() {
    bool answer;
    int value;

    cout << "Enter a value: ";
    cin >> value;

    answer = (value >= 0 && value < 10) || (value * 2 < 20 && value - 2 > -2) || (value - 1 > 1 && value / 2 < 10) || (value == 111);

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(");

    return 0;
}

// task 7 

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double num1 = 2.3;
    double num2 = 2.3;
    double num3 = 2.123456;
    double num4 = 2.123456;
    double num5 = 2.123456;

    printf("%.*lf\n", 1, num1);
    printf("%.*lf\n", 2, num2);
    printf("%.*lf\n", 6, num3);
    printf("%.*lf\n", 2, num4);
    printf("%.*lf\n", 0, num5);

    return 0;
}

// task 8
#include <iostream>
#include <cmath> 
using namespace std;

const float epsilon = 0.000001;

int main() {

    int num1, num2;
    float result1, result2;

    cout << "Enter two integer values: " << endl;
    cin >> num1 >> num2;


    result1 = 1.0f / num1;
    result2 = 1.0f / num2;

    if (fabs(result1 - result2) < epsilon) {

        cout << "Results are equal (by 0.000001 epsilon)" << endl;

    }
    else {

        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}

// task 9

#include <iostream>
using namespace std;

int main() {

    int ip1, ip2, ip3, ip4;

    cout << "Enter the first number: ";
    cin >> ip1;

    if (ip1 < 1 || ip1 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1;
    }

    cout << "Enter the second number: ";
    cin >> ip2;

    if (ip2 < 1 || ip2 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1;
    }

    cout << "Enter the third number: ";
    cin >> ip3;

    if (ip3 < 1 || ip3 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1;
    }

    cout << "Enter the fourth number: ";
    cin >> ip4;

    if (ip4 < 1 || ip4 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1;
    }

    cout << "IP Address: " << ip1 << "." << ip2 << "." << ip3 << "." << ip4 << endl;

    return 0;
}