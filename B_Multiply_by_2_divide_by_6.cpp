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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        int cnt = 0;
        while (n > 1) {
            if (n > 1e9) break;
            if (n % 6 == 0) {
                n = n / 6;
                cnt++;
            }
            else {
                n *= 2;
                cnt++;
            }

        }

        if (n == 1) {
            cout << cnt << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}