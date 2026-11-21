#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {    
    int count = 0;
    double a[100][100];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = (rand() % 13 - 6) / 2.0;
            cout << a[i][j] << " ";
            if (a[i][j] < 0) {
                count++;
            }
        }
        cout << endl;
    }
    cout << "\nNumber of negative elements: " << count << endl;
    cout << "dobutok a[0][0] * negative elements: " << a[0][0] * count << endl;
    return 0;
}