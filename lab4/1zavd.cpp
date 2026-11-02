#include <iostream>
using namespace std;
int main() {
    int A, B;
    cout << "Enter two integers: ";
    cin >> A >> B;
    if (A >=0 || B < -2) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}