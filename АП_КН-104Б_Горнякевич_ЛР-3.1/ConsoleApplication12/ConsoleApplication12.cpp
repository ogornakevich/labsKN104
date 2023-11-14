#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������
    cout << "x = ";
    cin >> x;

    A = x * x;

    // ����� 1: ������������ � ��������� ����
    if (x < 0)
        B = atan(4 * x) + exp(x);
    else if (x <= 1)
        B = log(2) + pow(x, 7.0 / 8.0);
    else
        B = cos(x) - pow(x, 3.0 / 4.0);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ����
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
