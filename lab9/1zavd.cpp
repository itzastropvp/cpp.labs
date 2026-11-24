#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "task 1: " << endl;
    for (int d = 100; d <= 999; d++) {
        int x = d;
        int sum = 0;
        for (int i = 0; i < 3; i++) {
          //  cout << (x % 10) << " ";
            sum += (x % 10);
            x /= 10;
        }
    if (d % sum == 0) {
        cout << d << endl;
    }
}
    cout << "task 2: " << endl;
    double f = 0;
    double dob = 1;
    int count = 0;
    for (double x = 1; x <= 2.5; x += 0.25) {
        for (double y = 0; y <= 1.8; y += 0.25) {
            f = sin(x) + cos(2 * y);
            cout << f << " ";
            if (f > 0) {
                dob *= f;
            }
            if (f < 0) {
                count++;
            }
        }
        cout << endl;
    }
    cout << "task 3: " << endl;
    cout << "dobutok: " << dob << endl;
    cout << "negative: " << count;
    return 0;
}