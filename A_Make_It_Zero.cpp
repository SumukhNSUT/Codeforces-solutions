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

// #define all(x) (x).begin(), (x).end()
// template<class T> inline void chmin(T& a, const T& b) { if (b < a) a = b; }
// template<class T> inline void chmax(T& a, const T& b) { if (a < b) a = b; }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     if (!(cin >> t)) return 0;
//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         if (n % 2 == 0) {
//             cout << 2 << endl;
//             cout << 1 << " " << n << endl;
//             cout << 1 << " " << n << endl;
//         }
//         else {
//             cout << 4 << endl;
//             cout << 1 << " " << n << endl;
//             cout << 1 << " " << n << endl;
//             cout << n - 1 << " " << n << endl;
//             cout << n - 1 << " " << n << endl;
//         }
//     }
//     return 0;

// }
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases
    while (t--)
    {
        long long n;
        cin >> n; // Read the length of the array
        long long a[n];
        for (int i = 0; i < n; i++) // Read the array elements
            cin >> a[i];
        // Check if the length of the array is even or odd
        if (n % 2 == 0) // If n is even
        {
            cout << 2 << endl; // Output the number of operations
            cout << 1 << " " << n << endl; // Perform operation on the entire array
            cout << 1 << " " << n << endl; // Repeat the operation
        }
        else // If n is odd
        {
            cout << 4 << endl; // Output the number of operations
            cout << 1 << " " << n - 1 << endl; // Perform operation on the first n-1 elements
            cout << 1 << " " << n - 1 << endl; // Repeat the operation
            cout << n - 1 << " " << n << endl; // Perform operation on the last two elements
            cout << n - 1 << " " << n << endl; // Repeat the operation
        }
    }
    return 0;
}

// Time Complexity (TC): O(n) = O(100)
// Space Complexity (SC): O(n) = O(100)