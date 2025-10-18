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

#define all(x) (x).begin(), (x).end()
template<class T> inline void chmin(T& a, const T& b) { if (b < a) a = b; }
template<class T> inline void chmax(T& a, const T& b) { if (a < b) a = b; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if (d < b) {
            // agar y to decrease krna hai toh
            cout << "-1\n";
            continue;
        }

        if (d == b) {
            // agr y constant hai toh

            // case1: x increase
            if (c > a) {
                cout << "-1" << endl;
                continue;
            }
            // case2: x decrease
            else {
                ans += a - c;
                cout << ans << endl;
                continue;
            }
        }

        if (d > b) {
            // agar y ko increase krna hai toh
            int diff = d - b;      // how much we increase y
            ans += diff;

            int x_new = a + diff;  // x also increases by the same amount

            if (x_new < c) {
                // even after increasing, x < c → impossible
                cout << "-1\n";
                continue;
            }

            // now decrease x_new to c
            ans += x_new - c;

            cout << ans << "\n";
            continue;
        }

    }
    return 0;
}