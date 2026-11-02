#include <iostream>
using namespace std;
int main() {
    int A, B;
    cout << "Enter two integers: ";
    cin >> A >> B;
    for (int i = A; i <= B; i++) {
        cout << i*i*i << " ";
    }
    return 0;
}