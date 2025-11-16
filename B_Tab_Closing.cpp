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
    long long a, b, n;
    cin >> a >> b >> n;
    vector<int> v(n);
    long long m = n;
    for (int i = 0; i < n; i++) {
        m = n - i;
        if (a / m == 0) {
            v[i] = 1;
        }
        else {
            v[i] = min(a / m, b);
        }
    }

    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}