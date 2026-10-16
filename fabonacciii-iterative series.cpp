#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive number of terms." << endl;
        return 0;
    }

    vector<long long> fib(n);

    fib[0] = 0;

    if (n > 1) {
        fib[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }

    cout << endl;
    return 0;
}