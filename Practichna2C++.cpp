#define USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
#include <Windows.h>

using namespace std;

void example_1()
{
	wchar_t alpha = L'\u03B1';
	wchar_t beta = L'\u03B2';

	float x, a, c, b;
	float Y;

	cout << ("Enter x \n");
	cin >> x;

	cout << ("Enter a \n");
	cin >> a;

	cout << ("Enter c \n");
	cin >> c;

	cout << ("Enter b \n");
	cin >> b;

	if (x >= 1.5)
	{
		Y = ((pow(x, 3) + 3 * a) * c) / (a - b + x);
		cout << ("Y=") << Y << endl;
	}
	else {
		Y = pow(sin(alpha), 2) * pow(sin(beta), 2);
		cout << ("Y=") << Y << endl;
	}
}

void example_2()
{
	double x;
	double y;
	cout << "Enter x and y for a dot:";
	cin >> x >> y;

	double lineEquation1 = -x + 1;
	double lineEquation2 = x - 1;
	double lineEquation3 = x + 1;


	if ((x >= -1 && x >= 0 && y <= 1 && y >= lineEquation1) || (y <= 1 && x <= 1 && y >= 0 && y >= lineEquation2) || (y <= -1 && x <= 1 && y >= 0 && y >= lineEquation3)) {
		cout << "Задана точка потрапляє в заштриховану область";
	}
	else {
		cout << "Задана точка не потрапляє в заштриховану область";
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Завдання 1" << endl;
	example_1();
	
	cout << "Завдання 2" <<endl;
	example_2();
}
