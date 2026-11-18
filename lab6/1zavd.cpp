#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int a[100], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
    }
         for (int i = 0; i < n; i++) {
             cout << a[i] << " ";
       }
       cout << endl;
    int sum = 0;
    cout << "Even elements: ";
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
            sum += a[i];
        }
    }
    cout << endl;
    cout << "Sum of even elements: " << sum;
    return 0;
}