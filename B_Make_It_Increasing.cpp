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
    if (!(cin >> t)) return 0;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cnt = 0;
        bool impossible = false;

        for (int i = n - 1; i > 0; i--) {
            while (v[i - 1] >= v[i] && v[i - 1] > 0) {
                v[i - 1] /= 2;
                cnt++;
            }
            if (v[i - 1] >= v[i]) {
                impossible = true;
                break;
            }
        }

        if (impossible)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }

    return 0;
}
