#include <iostream>

using namespace std;

int main() {

	double x, a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	//Спосіб 1
	if ((x + c) < 0 && a != 0)
		F = -(a * pow(x, 2)) - b;
	if ((x + c) > 0 && a == 0)
		F = (x - a) / (x - c);
	if (!((x + c) < 0 && a != 0) && !(((x + c) > 0 && a == 0)))
		F = (x / c) + (c / x);

	cout << endl;
	cout << "1) F = " << F << endl;

	//Спосіб 2
	if ((x + c) < 0 && a != 0)
		F = -(a * pow(x, 2)) - b;
	else
		if ((x + c) > 0 && a == 0)
			F = (x - a) / (x - c);
		else
			F = (x / c) + (c / x);

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;

}