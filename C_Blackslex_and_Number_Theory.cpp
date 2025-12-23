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

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long low = 2e18;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < low) {
            low = a[i];
        }
    }

    long long small = 2e18;
    bool gap = false;

    for (int i = 0; i < n; ++i) {
        if (a[i] > low) {
            gap = true;
            long long currgap = a[i] - low;
            if (currgap < small) {
                small = currgap;
            }
        }
    }

    if (!gap) {
        cout << low << endl;
    }
    else {
        if (low > small) {
            cout << low << endl;
        }
        else {
            cout << small << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}