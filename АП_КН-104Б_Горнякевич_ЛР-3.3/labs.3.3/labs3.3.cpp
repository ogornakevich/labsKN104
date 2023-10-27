#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x, y;

	cout << "x = "; cin >> x;

	if (x <= -4)
		y = -4;
	else
		if (-4 < x && x <= 0)
			y = x / 4;
		else
			if (0 < x && x <= 2)
				y = pow(x, 2);
			else
				y = -(x / 2) + 5;

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}