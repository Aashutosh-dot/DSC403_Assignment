#include <iostream>
using namespace std;

long long binomial(int n, int k) {
    long long res = 1;
    for (int i = 0; i < k; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";

        for (int j = 0; j <= i; j++)
            cout << binomial(i, j) << " ";

        cout << endl;
    }
    return 0;
}