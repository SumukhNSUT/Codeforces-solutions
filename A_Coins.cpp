#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        // If n is even -> always YES (use only 2-coins)
        // If k is odd -> always YES (we can adjust parity using one k-coin)
        // Otherwise (n odd, k even) -> NO
        if (n % 2 == 0 || k % 2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
