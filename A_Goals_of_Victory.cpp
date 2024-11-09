#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n - 1; i++) {
            cin >> v[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + v[i];
        }

        int ans = 0 - sum;
        cout << ans << endl;
    }
    return 0;
}