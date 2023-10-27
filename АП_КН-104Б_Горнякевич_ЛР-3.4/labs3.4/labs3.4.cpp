#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x, y, R1, R2;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	//Ðîçãàëóæåííÿ â ïîâí³é ôîðì³
	if ((x > 0 && y > 0 && x * x + y * y <= R1 * R1 && x * x + y * y >= R2 * R2) ||
		(x < 0 && y < 0 && x * x + y * y <= R1 * R1 && x * x + y * y >= R2 * R2))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}