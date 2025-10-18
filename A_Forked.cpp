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

#define all(x) (x).begin(), (x).end()
template<class T> inline void chmin(T& a, const T& b) { if (b < a) a = b; }
template<class T> inline void chmax(T& a, const T& b) { if (a < b) a = b; }


int main()
{
    int t; // Number of test cases
    cin >> t;
    int dx[4] = { 1, -1, -1, 1 }, dy[4] = { 1, 1, -1, -1 };
    // 1st quad = (1, 1)
    // 2nd quad = (-1, 1)
    // 3rd quad = (-1, -1)
    // 4th quad = (1, -1)
    while (t--)
    {
        long long a, b; // Knight's move parameters
        cin >> a >> b;
        long long x_king, y_king; // Position of the king
        cin >> x_king >> y_king;
        long long x_queen, y_queen; // Position of the queen
        cin >> x_queen >> y_queen;
        // Inputs are read

        // Sets to store positions attacked by the knight when placed to attack king and queen
        set<pair<int, int>> king_hits, queen_hits;

        // Calculate all possible positions that can be attacked by the knight
        for (int j = 0; j < 4; j++)
        {
            // Calculate positions attacked by the knight when placed to attack the king
            king_hits.insert({ x_king + dx[j] * a, y_king + dy[j] * b });
            king_hits.insert({ x_king + dx[j] * b, y_king + dy[j] * a });

            // Calculate positions attacked by the knight when placed to attack the queen
            queen_hits.insert({ x_queen + dx[j] * a, y_queen + dy[j] * b });
            queen_hits.insert({ x_queen + dx[j] * b, y_queen + dy[j] * a });
        }

        int ans = 0; // Variable to store the number of positions where the knight can fork the king and queen
        // Check for common positions in both sets
        for (auto position : king_hits)
            if (queen_hits.find(position) != queen_hits.end())
                ans++;

        cout << ans << endl; // Output the result for the current test case
    }
    return 0;
}

// Time Complexity (TC): O(8*log2(8)) = O(8*3) = O(24)
// Space Complexity (SC): O(8)
