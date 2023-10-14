
#include "pch.h"
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>




using namespace std;
int main()
{   
	
	double x, z1, z2, PI;
	cout << "x = "; cin >> x;
	// 1 р-ня
	z1 = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	// 2 р-ня
	z2 = 2 * sqrt(2)*cos(x)*sin((M_PI/ 4) + 2 * x);
	cout << "z1 = " << z1;
	cout << " z2 = " << z2;

}


