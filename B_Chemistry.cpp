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
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        unordered_map<char, int> freq;
        for (int i = 0; i < n; i++) {
            freq[str[i]]++;
        }
        int cnt = 0;
        for (auto it : freq) {
            if (it.second % 2 != 0) {
                cnt++;
            }
        }
        // 1 character ho skta hai with odd freq
        if (cnt > k + 1) { cout << "NO" << endl; }
        else {
            cout << "YES\n";
        }

    }
    return 0;
}
