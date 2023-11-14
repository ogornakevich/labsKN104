#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу
    cout << "x = ";
    cin >> x;

    A = x * x;

    // спосіб 1: розгалуження в скороченій формі
    if (x < 0)
        B = atan(4 * x) + exp(x);
    else if (x <= 1)
        B = log(2) + pow(x, 7.0 / 8.0);
    else
        B = cos(x) - pow(x, 3.0 / 4.0);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x < 0)
        B = atan(4 * x) + exp(x);
    else if (x > 1)
        B = cos(x) - pow(x, 3.0 / 4.0);
    else
        B = log(2) + pow(x, 7.0 / 8.0);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}
