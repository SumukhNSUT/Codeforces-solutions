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

long long calc(char c, const string& str) {
    int n = str.size();
    vector<int> pos;

    // store positions of character c
    for (int i = 0; i < n; i++)
        if (str[i] == c) pos.push_back(i);

    int k = pos.size();
    if (k <= 1) return 0LL;

    // shift positions
    for (int i = 0; i < k; i++)
        pos[i] -= i;

    long long median = pos[k / 2];
    long long cost = 0;
    for (int x : pos)
        cost += abs(x - median);

    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        long long ans = min(calc('a', str), calc('b', str));
        cout << ans << "\n";
    }
    return 0;
}