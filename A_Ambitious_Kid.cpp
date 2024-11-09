#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool hasZero = false;
    int minOps = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) hasZero = true;
        minOps = min(minOps, abs(a[i]));
    }

    if (hasZero) cout << 0 << endl;
    else cout << minOps << endl;

    return 0;
}
