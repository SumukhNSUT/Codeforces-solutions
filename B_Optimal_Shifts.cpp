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

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> pos;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                pos.push_back(i);

        // If all are 1
        if ((int)pos.size() == n) {
            cout << 0 << "\n";
            continue;
        }

        int k = pos.size();
        int max_gap = 0;

        for (int i = 0; i < k; i++) {
            int curr = pos[i];
            int next = pos[(i + 1) % k];
            int gap;

            if (next > curr)
                gap = next - curr - 1;
            else
                gap = (n - curr - 1) + next;

            max_gap = max(max_gap, gap);
        }

        cout << max_gap << "\n";
    }
}
