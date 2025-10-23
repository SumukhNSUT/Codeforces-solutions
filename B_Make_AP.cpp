// Standard headers for DSA and competitive programming
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
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        // multiply a by k
        if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
            ok = true;

        // multiply b by k
        else if ((a + c) % (2 * b) == 0)
            ok = true;

        // multiply c by k
        else if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
            ok = true;

        cout << (ok ? "YES\n" : "NO\n");
    }
}
