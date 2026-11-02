#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, h, x, y;

    cout << "Введіть a, b, h: ";
    cin >> a >> b >> h;

    if (h <= 0) {
        cout << "Помилка: крок h має бути більше 0" << endl;
        return 0;
    }

    cout << fixed << setprecision(3);
    cout << setw(10) << "x" << setw(12) << "Y" << endl;
    cout << "----------------------" << endl;

    for (x = a; x <= b + 1e-9; x += h) {
        y = a * b + sin(x) * sin(x) - x * 1 / 2;
        cout << setw(10) << x << setw(12) << y << endl;
    }

    return 0;
}