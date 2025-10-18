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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int total2 = 0;
        for (int x : a) if (x == 2) total2++;

        if (total2 % 2 != 0) {  // odd number of 2’s => impossible
            cout << -1 << "\n";
            continue;
        }

        int half = total2 / 2, cnt = 0, ans = -1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) cnt++;
            if (cnt == half) {
                ans = i + 1; // 1-based index
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
