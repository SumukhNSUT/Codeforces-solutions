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
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int min = 0;
        int max = 0;

        for (int i = 0; i < n; i++) {
            max = max + ceil(v[i] * 1.0 / x);
            min = min + (v[i]);
        }

        cout << ceil(min / x) << " " << max << endl;

    }
    return 0;
}