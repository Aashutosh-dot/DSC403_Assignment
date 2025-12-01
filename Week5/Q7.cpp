#include <iostream>
using namespace std;

long long fibTR(int n, long long a = 0, long long b = 1) {
    if (n == 0) return a;
    return fibTR(n - 1, b, a + b);
}

int main() {
    int n;
    cin >> n;
    cout << fibTR(n);
}
