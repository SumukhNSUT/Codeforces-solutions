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

        string s;
        cin >> s;

        unordered_set<char> st;
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; i++) {
            st.insert(s[i]);
            v1[i] = st.size();
        }

        st.clear();

        for (int i = n - 1; i >= 0; i--) {
            st.insert(s[i]);
            v2[i] = st.size();
        }

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, v1[i] + v2[i + 1]);
        }

        cout << ans << "\n";
    }
    return 0;
}
