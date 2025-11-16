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

    long long g, c, t;
    cin >> g >> c >> t;

    vector<long long> v;
    v.push_back(g);
    v.push_back(c);
    v.push_back(t);

    sort(v.begin(), v.end());

    if (abs(v[1] - v[0]) >= 10 || abs(v[2] - v[1]) >= 10 || abs(v[2] - v[0]) >= 10) {
        cout << "check again\n";
    }
    else {
        cout << "final " << v[1] << "\n";
    }

    return 0;
}
