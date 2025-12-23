#include <iostream>
#include <vector>
#include <array>
#include <string>
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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long ans = 0;
        for (int i = 0; i + 1 < n; i++) {
            ans += llabs(v[i] - v[i + 1]);
        }

        long long maxi = 0;

        maxi = max(maxi, llabs(v[0] - v[1]));

        maxi = max(maxi, llabs(v[n - 2] - v[n - 1]));

        for (int i = 1; i + 1 < n; i++) {
            long long gain =
                llabs(v[i - 1] - v[i]) +
                llabs(v[i] - v[i + 1]) -
                llabs(v[i - 1] - v[i + 1]);
            maxi = max(maxi, gain);
        }

        cout << ans - maxi << '\n';
    }
    return 0;
}
