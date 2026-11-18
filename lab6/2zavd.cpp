#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    double sum = 0;
    int count = 0;
    int n;
    double a[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++) {
       a[i] = (rand() % 13 - 6) / 2.0;
    }
    double max = a[0];
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] == 0) {
            count++;
        }
}
sum = max + count;
cout << "Number of zeros: " << count << endl;
cout << "Maximum element: " << max << endl;
cout << "Sum of max and zeros: " << sum << endl;
return 0;
}