#include <iostream>
using namespace std;
int main() {
    int count = 0;

    for (int a = 0; a <= 3; a++) {
        int b = 0;
        while (b <= 4) {
            int c = 0;
            do {
                if (5 * a + 4 * b + 2 * c == 18) {
                    count++;
                    cout << a << " " << b << " " << c << endl;
                }
                c++;
            } while (c <= 9);
            b++;
        }
    }
    cout << "Усього варіантів: " << count << endl;
    return 0;
}