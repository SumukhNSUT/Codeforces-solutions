#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long minsum = k * (k + 1) / 2;
        long long maxsum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

        // for maxsum -> (poore 'n' ka sum - starting ke (n-k) ka sum) gives last ke 'k' ka sum

        if (x >= minsum && x <= maxsum) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
