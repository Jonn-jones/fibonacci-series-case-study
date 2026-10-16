#include <iostream>
using namespace std;


long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter the position n: ";
    cin >> n;

    if (cin.fail() || n < 0 || n > 90) {
        cout << "Enter a valid integer between 0 and 90.\n";
        return 1;
    }

    cout << "Fibonacci series: ";

    for (int i = 0; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << "\nFibonacci number at position "
         << n << " is " << fibonacci(n) << endl;

    return 0;
}