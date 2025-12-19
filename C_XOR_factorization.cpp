#include <iostream>
#include <vector>
#include <array>
#include <string>
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
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        if (k % 2 == 1) {

            for (int i = 0; i < k; i++) {
                cout << n << " ";
            }
            cout << "\n";
        }
        else {

            int h = 63 - __builtin_clzll(n);
            long long x = (1LL << h) - 1;
            long long y = n ^ x;

            if (x <= n && y <= n) {
                cout << x << " " << y << " ";
            }
            else {
                cout << n << " " << 0 << " ";
            }

            for (int i = 0; i < k - 2; i++) {
                cout << n << " ";
            }
            cout << "\n";
        }

    }
    return 0;
}