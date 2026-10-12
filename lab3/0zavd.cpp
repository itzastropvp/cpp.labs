#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int v = 5;
    const int year = 2026;

    int a, b, x, mn;
    char c;

    cout << "Введіть два числа a і b: ";
    cin >> a >> b;
    cout << "Введіть число x: ";
    cin >> x;
    cout << "Введіть символ c: ";
    cin >> c;

    if (a > b) cout << "Більше: " << a << endl;
    else cout << "Більше: " << b << endl;

    if (a < b) mn = a;
    else mn = b;
    cout << "Менше: " << mn << endl;

    if (x % 2 == 0) cout << "Парне" << endl;
    else cout << "Непарне" << endl;

    if (x % v == 0) cout << "Кратне варіанту" << endl;
    else cout << "Не кратне варіанту" << endl;

    if (x < year) cout << "Менше від поточного року" << endl;
    else cout << "Не менше від поточного року" << endl;

    if (abs(x) >= 10 && abs(x) <= 99) cout << "Двозначне" << endl;
    else cout << "Не двозначне" << endl;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) cout << "Латинська літера" << endl;
    else cout << "Не латинська літера" << endl;

    if (x * x + 5 * x - 6 > 0) cout << "Є розв'язком нерівності" << endl;
    else cout << "Не є розв'язком нерівності" << endl;

    if (x <= -10 || (x >= 5 && x <= 100) || x > 1000) cout << "Належить проміжкам" << endl;
    else cout << "Не належить проміжкам" << endl;

    if (x > -100 && x <= 10) cout << "Належить (-100, 10]" << endl;
    else cout << "Не належить (-100, 10]" << endl;

    return 0;
}