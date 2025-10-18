#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long cnt = 0;
        long long p = 1;
        while (p <= n) {
            for (int d = 1; d <= 9; d++) {
                if (d * p <= n) cnt++;
            }
            p *= 10;
        }
        cout << cnt << "\n";
    }
    return 0;
}
