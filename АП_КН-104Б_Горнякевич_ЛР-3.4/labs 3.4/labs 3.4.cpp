#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;

	cout << " x = "; cin >> x;
	cout << " y = "; cin >> y;

	if ((y >= ((x - 2) * (x - 2) - 3) && (y <= x) && (y >= 0)) ||
		(y >= ((x - 2) * (x - 2) - 3) && (y <= -x)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}6