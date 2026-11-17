#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double S = 0;
    double P = 1;
    int i = 1;
    cin >> n;
    while (i <= n) {
        S = S + sin(i);
        P = P * S;
        i++;
    }
    cout << P << endl;
    return 0;
}