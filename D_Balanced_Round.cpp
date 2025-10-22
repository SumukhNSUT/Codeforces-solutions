#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long len = 1;
        long long maxi = 1;

        for (int i = 0; i < n - 1; i++) {
            if (v[i + 1] - v[i] <= k) {
                len++;
            }
            else {
                maxi = max(maxi, len);
                len = 1;
            }
        }
        maxi = max(maxi, len);

        cout << n - maxi << "\n";
    }

    return 0;
}
