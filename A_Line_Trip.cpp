#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include<climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = INT_MIN;
        for (int i = 1; i < n; i++) {
            mn = max(mn, a[i] - a[i - 1]);
        }

        int result = max(a[0], max(2 * (x - a[n - 1]), mn));
        cout << result << endl;
    }
    return 0;

}