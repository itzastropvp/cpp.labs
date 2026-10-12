#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, F;
    cout << "Введіть a, b, c, x: ";
    cin >> a >> b >> c >> x;

    if (a < 0 && c != 0) {
        F = a * x * x + b + c;
        cout << "F = " << F << endl;
    } else if (a > 0 && c == 0) {
        if (x - c == 0) {
            cout << "Ділення на нуль неможливе." << endl;
        } else {
            F = -a / (x - c);
            cout << "F = " << F << endl;
        }
    } else {
        F = a * (x + c);
        cout << "F = " << F << endl;
    }

    return 0;
}