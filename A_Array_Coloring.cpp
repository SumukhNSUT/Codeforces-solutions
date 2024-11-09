#include <bits/stdc++.h>
using namespace std;
// same parity: either both sums are odd or even
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int cnt = 0;
        // if count of all odd number is even - then yes else no
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 != 0) {
                cnt++;
            }
        }
        if (cnt % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    return 0;
}