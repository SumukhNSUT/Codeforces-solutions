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
        int n;
        cin >> n;

        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        string ans = "";

        for (int i = 0; i < n; i++) {
            string f = v[i] + ans;
            string b = ans + v[i];
            ans = min(f, b);
        }

        cout << ans << "\n";
    }
    return 0;
}