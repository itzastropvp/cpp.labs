#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[100][100];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        bool hasEven = false;
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 13 - 6;
            cout << a[i][j] << " ";
            if (a[i][j] % 2 == 0) {
                hasEven = true;
            }
        }
        cout << endl;
        if (!hasEven) {
            cout << "row has no even elements: " << i << " ";
        }
    }
}