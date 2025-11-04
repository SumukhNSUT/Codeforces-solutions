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

        long long mini = -1;
        long long maxi = -1;


        if (n % 2 == 0) {
            maxi = n / 4;
            mini = (n + 5) / 6;
        }

        if (mini == -1 && maxi == -1) {
            cout << -1 << "\n";
        }
        else {
            cout << mini << " " << maxi << "\n";
        }
    }

    return 0;
}
