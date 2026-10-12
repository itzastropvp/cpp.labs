#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть число від 0 до 9: ";
    cin >> n;

    switch (n) {
        case 0:
            cout << "Біологічний факультет" << endl;
            break;
        case 1:
            cout << "Філологічний факультет" << endl;
            break;
        case 2:
            cout << "Механіко-математичний факультет" << endl;
            break;
        case 3:
            cout << "Фізичний факультет" << endl;
            break;
        case 4:
            cout << "Хімічний факультет" << endl;
            break;
        case 5:
            cout << "Історичний факультет" << endl;
            break;
        case 6:
            cout << "Юридичний факультет" << endl;
            break;
        case 7:
            cout << "Економічний факультет" << endl;
            break;
        case 8:
            cout << "Географічний факультет" << endl;
            break;
        case 9:
            cout << "Філософський факультет" << endl;
            break;
        default:
            cout << "Некоректне число. Введіть число від 0 до 9." << endl;
    }

    return 0;
}