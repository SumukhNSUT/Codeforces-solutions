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
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        unordered_map<char, int> mp;
        for (char c : s1) {
            mp[c]++;
        }

        bool ok = true;
        for (char c : s2) {
            if (mp[c] > 0) {
                mp[c]--;
            }
            else {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
