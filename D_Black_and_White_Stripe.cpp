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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        int cw = 0;

        for (int x = 0; x < k; x++) {
            if (str[x] == 'W') {
                cw++;
            }
        }

        int ans = cw;

        for (int i = k; i < n; i++) {
            if (str[i - k] == 'W') { cw--; }
            if (str[i] == 'W') { cw++; }
            ans = min(ans, cw);
        }

        cout << ans << '\n';
    }

    return 0;
}
