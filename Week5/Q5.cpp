#include <iostream>
using namespace std;

long long power(long long a, long long b, long long r = 1) {
    if (b == 0) return r;
    return power(a, b - 1, r * a);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << power(a, b);
}
