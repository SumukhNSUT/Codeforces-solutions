#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int k = 0;
        for (int i = 0; i < n; i++) {
            int shift = abs(i - (v[i] - 1));
            k = gcd(k, shift);
        }

        cout << k << '\n';
    }

    return 0;
}
