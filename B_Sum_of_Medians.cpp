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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n * k);
        for (int i = 0; i < n * k; i++) {
            cin >> v[i];
        }
        long long ans = 0;
        long long idx = n * k;
        while (k--) {
            int m = n / 2 + 1;
            idx = idx - m;
            ans += v[idx];
        }
        cout << ans << endl;
    }
    return 0;
}