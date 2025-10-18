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
// Function to get highest set bit of a number
int highestBit(long long n) {
    int pos = -1;
    while (n) {
        n >>= 1;
        pos++;
    }
    return pos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            // Already equal
            cout << 0 << "\n";
            continue;
        }

        if (b > a) {
            // Impossible if b has a bit higher than a's highest bit
            int hbA = highestBit(a);
            int hbB = highestBit(b);
            if (hbB > hbA) {
                cout << -1 << "\n";
            }
            else {
                // Can do in 2 operations
                long long x1 = b;
                long long x2 = a ^ b;
                cout << 2 << "\n" << x1 << " " << x2 << "\n";
            }
        }
        else {
            // a > b: Can always do in at most 3 operations
            long long x1 = a - b;
            long long x2 = b;
            long long x3 = b;
            cout << 3 << "\n" << x1 << " " << x2 << " " << x3 << "\n";
        }
    }

    return 0;
}
