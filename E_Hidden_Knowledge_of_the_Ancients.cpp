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
        int n, k, l, r;
        cin >> n >> k >> l >> r;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int cnt = 0;
        for (int i = l; i <= r; i++) {
            int size = i;
            unordered_map<int, int> freq;

            // Sliding window of size `size`
            for (int start = 0; start + size - 1 < n; start++) {
                freq.clear();
                for (int j = start; j < start + size; j++) {
                    freq[v[j]]++;

                }
                // Do something with freq here if needed
                if (freq.size() == k)cnt++;
            }

        }

        cout << cnt << endl;
    }
    return 0;
}