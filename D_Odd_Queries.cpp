#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <string_view>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <functional>
#include <utility>
#include <iterator>
#include <limits>
#include <cmath>
#include <climits>
#include <cstring>
#include <bitset>
#include <tuple>
#include <optional>
#include <variant>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <queue>
#include <stack>
#include <chrono>
#include <random>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<long long> pref(n);
        long long s = 0;
        for (int i = 0; i < n; i++) {
            s += v[i];
            pref[i] = s;
        }
        long long sum = pref[n - 1];

        for (int i = 1; i <= q; i++) {
            long long l, r, k;
            cin >> l >> r >> k;

            long long a = (r - l + 1) * k;
            long long seg = 0; // segment ka sum
            if (l == 1) seg = pref[r - 1];
            else {
                seg = pref[r - 1] - pref[l - 2];
            }
            long long ans = sum + a - seg;
            if (ans % 2 != 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
