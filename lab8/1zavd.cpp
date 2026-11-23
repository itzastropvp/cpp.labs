#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double rowSum(double *row, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += row[i];
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the dimensions: ";
    cin >> n;
    double** a = new double*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new double[n];
    }
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = (rand() % 21 - 10) / 2.0;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    double min = a[0][0];
    int minRow = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                minRow = i;
            }
        }
    }
    cout << "Row with the minimum element: " << minRow << endl;
    cout << "Sum of elements in that row: " << rowSum(a[minRow], n) << endl;
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}