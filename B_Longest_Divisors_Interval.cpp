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
        long long n;
        cin >> n;

        vector<long long> divisors;
        for (long long i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {
                    divisors.push_back(n / i);
                }
            }
        }

        sort(divisors.begin(), divisors.end());

        int maxi = 1, len = 1;
        for (int i = 1; i < (int)divisors.size(); i++) {
            if (divisors[i] == divisors[i - 1] + 1) {
                len++;
            }
            else {
                len = 1;
            }
            maxi = max(maxi, len);
        }

        cout << maxi << "\n";

    }
    return 0;
}
