#include <iostream>
#include <cmath>
using namespace std;
void zavd1();
void zavd2();
void zavd3();

int main() {
    zavd1();
    zavd2();
    zavd3();
    return 0;
}

void zavd1() {
    double a, b;
    cout << "Введіть a і b: ";
    cin >> a >> b;
    double chys, znam, rez;
    chys = pow((a + b), 3) - (pow(a, 3) + 3 * pow(a, 2) * b);
    znam = 3 * a * pow(b, 2) + pow(b, 3);
    rez = chys / znam;
    if (znam == 0) {
        cout << "Ділення на нуль неможливе." << endl;
    } else {
        cout << "Результат: " << rez << endl;
    }
}

void zavd2() {
    int n, m, res;
    cout << "Введіть n і m: ";
    cin >> n >> m;
    res = n---m;
    cout << "Результат: " << res << endl;
    cout << "n = " << n << endl;
}

void zavd3() {
    cout << "Введіть a, b і c: ";
    double a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 || !(a < b + c && b < a + c && c < a + b)) {
        cout << "Трикутник не існує." << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Трикутник не є різностороннім." << endl;
    } else {
         double p = (a + b + c) / 2;
         double S = sqrt(p * (p - a) * (p - b) * (p - c));
         double r = S / p;
         cout << "Радіус окружності, вписаної в різносторонній трикутник: " << r << endl;
    }
}