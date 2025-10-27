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
        long long n;
        cin >> n;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long cnt0 = 0;
        long long cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 1) cnt1++;
            if (v[i] == 0) cnt0++;
        }

        long long ans = pow(2, cnt0) * cnt1;
        cout << ans << endl;

    }
    return 0;
}