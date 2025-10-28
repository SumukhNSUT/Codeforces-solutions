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

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long GCD(const vector<long long>& a) {
    long long g = a[0];
    for (auto v : a) {
        g = gcd(g, v);
    }
    return g;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = GCD(a);

        if (g == 1) {
            cout << 2 << endl;
            continue;
        }

        long long ans = -1;
        for (long long x = 2; x <= 100; x++) {
            if (gcd(g, x) == 1) {
                ans = x;
                break;
            }
        }
        cout << (ans == -1 ? -1 : ans) << endl;
    }

    return 0;
}