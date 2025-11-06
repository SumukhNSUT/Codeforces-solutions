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

int fn(string a, string b) {
    int k = b.size() - 1;
    int i = -1;
    int j = -1;
    while (k >= 0) {
        if (b[k] == a[1]) {
            j = k;
            break;
        }
        k--;
    }
    while (k >= 0) {
        if (k != j && b[k] == a[0]) {
            i = k;
            break;
        }
        k--;
    }

    int remove = (j - i - 1) + (b.size() - j - 1);
    return remove;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string n;
        cin >> n;

        vector<string> v = { "00", "25", "50", "75" };
        int ans = INT_MAX;
        for (auto it : v) {
            ans = min(ans, fn(it, n));
        }
        cout << ans << endl;

    }
    return 0;
}