#include <iostream>
using namespace std;
int main() {
    int n;
    double sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i / (double)(i + 1);
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}