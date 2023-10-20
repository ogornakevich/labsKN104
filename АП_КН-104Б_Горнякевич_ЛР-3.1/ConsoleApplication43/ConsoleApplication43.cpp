#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y, A, B;
	cout << "x = "; cin >> x;
	A = abs(x * x * x);
	// розгалуження в скороченій формі
	if (x < -1) {
		B = abs(2 + x) + sin(x) * sin(x);
	};
	if (x <= 1 && x >= -1) {
		B = atan(pow(x, 3) + 1) + 1;
	};
	if (x > 1) {
		B = exp(cos(x)) + log10(1 / x + 1);
	};
	y = A + B;
	cout << "1)y = " << y;
	// розгалуження в повній формі
	if (x < -1) {
		B = abs(2 + x) + sin(x) * sin(x);
	}
	else if (x <= 1 && x >= -1) {
		B = atan(pow(x, 3) + 1) + 1;
	}
	else {
		B = exp(cos(x)) + log10(1 / x + 1);
	};
	cout << " 2)y = " << y;
}