#include <iostream>

using namespace std;

int Fibonacci(int n) {
    int a = 0, b = 1, c = 0;

    for (n; n > 2; --n) {
        if (n != 3) {
            cout << a << ", ";
        }
        else {
            cout << a;
        }
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

int main() {
    int n;
    cin >> n;

    Fibonacci(n);
}
