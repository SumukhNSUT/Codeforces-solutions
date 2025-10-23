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

        int a = v[0];
        unordered_map<int, int> mp;
        for (auto it : v) {
            mp[it]++;
        }

        int maxi = 0;
        for (auto it : mp) {
            maxi = max(maxi, it.second);
        }

        for (auto it : mp) {
            if (it.second == maxi) {
                a = it.first;
            }
        }
        if (mp.size() == 1) {
            cout << 0 << endl;
            continue;
        }
        int swaps = n - maxi;
        int clones = 0;
        while (n > maxi) {
            maxi = 2 * maxi;
            clones++;
        }

        cout << swaps + clones << endl;

    }

    return 0;
}