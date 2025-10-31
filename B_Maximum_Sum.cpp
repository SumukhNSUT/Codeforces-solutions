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
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        long long ans = 0;
        long long total = 0;
        for (int i = 0; i < n; i++) {
            total += v[i];
        }


        int left = 0;           // pointer to smallest
        int right = n - 1;      // pointer to largest

        while (k > 0 && right - left + 1 >= 2) {
            long long mini1 = v[left];
            long long mini2 = v[left + 1];
            long long maxi = v[right];

            if (mini1 + mini2 >= maxi) {
                ans += maxi;
                right--; // remove largest
            }
            else {
                ans += mini1 + mini2;
                left += 2; // remove two smallest
            }
            k--;
        }

        // sum of remaining elements:
        long long remaining_sum = 0;
        for (int i = left; i <= right; i++) remaining_sum += v[i];

        cout << remaining_sum - ans << '\n';
    }
    return 0;
}
