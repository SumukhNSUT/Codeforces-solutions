// #include <iostream>
// #include <vector>
// #include <array>
// #include <string>
// #include <string_view>
// #include <sstream>
// #include <iomanip>
// #include <algorithm>
// #include <numeric>
// #include <functional>
// #include <utility>
// #include <iterator>
// #include <limits>
// #include <cmath>
// #include <climits>
// #include <cstring>
// #include <bitset>
// #include <tuple>
// #include <optional>
// #include <variant>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <deque>
// #include <queue>
// #include <stack>
// #include <chrono>
// #include <random>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int test;
//     if (!(cin >> test)) return 0;
//     while (test--) {
//         string s, t;
//         cin >> s >> t;

//         unordered_map<char, int> ms;
//         unordered_map<char, int> mt;
//         for (auto it : t) {
//             mt[it]++;
//         }

//         for (auto it : s) {
//             if (mt.count(it)) {
//                 ms[it]++;
//             }
//         }
//         string ans = "";
//         for (int i = 0; i < s.size(); i++) {
//             if (mt.count(s[i])) {
//                 ans += s[i];
//             }
//         }

//         for (int i = 0; i < ans.size(); i++) {
//             if (ms[ans[i]] < mt[ans[i]]) {
//                 cout << "NO" << endl;
//             }
//             else {
//                 int rem = abs(mt[ans[i]] - ms[ans[i]]);
//                 char ch = mt[ans[i]];

//                 for (int i = 0; i < ans.size(); i++) {
//                     if (rem > 0 && ans[i] == ch) {
//                         ans[i] = '#';
//                         rem--;
//                     }
//                 }
//             }
//         }
//         string res = "";
//         for (int i = 0; i < ans.size(); i++) {
//             if (ans[i] != '#') {
//                 res += ans[i];
//             }
//         }
//         if (res == t) {
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }

//     }
//     return 0;
// }

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

int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        string s, t;
        cin >> s >> t;

        // Get the lengths of the initial word s and the target word t
        int n = s.size();
        int m = t.size();

        // Create a frequency vector to count occurrences of each letter in t
        vector<int> frequency_in_t(26, 0);
        for (int i = 0; i < m; i++) // Iterate over each character in t
            frequency_in_t[t[i] - 'A']++;

        // Traverse the initial word s from the end to the beginning
        for (int i = n - 1; i >= 0; i--) // Iterate over each character in s
        {
            // If the character in s is needed in t, decrement its count
            if (frequency_in_t[s[i] - 'A'] > 0)
                frequency_in_t[s[i] - 'A']--;
            else
                // Otherwise, mark it as removed by setting it to '.'
                s[i] = '.';
        }

        // Construct the final string by excluding marked characters
        string final_string = "";
        for (int i = 0; i < n; i++) // Iterate over each character in s
        {
            if (s[i] != '.')
                final_string += s[i];
        }

        // Check if the constructed final string matches the target word t
        if (final_string == t) // Compare the final string with t
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// Time Complexity (TC): O(n+m) = O(30)
// Space Complexity (SC): O(n+m+26+m) = O(n+m) = O(30)
