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
    int t;
    cin >> t; // Read the number of test cases
    while (t--)
    {
        long long n;
        cin >> n; // Read the size of the array for each test case
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) // Read the array elements
            cin >> v[i];

        // Initialize the answer with the difference between the last and first element
        long long answer = v[n - 1] - v[0];

        // Check the maximum difference between any element and the first element
        for (int i = 1; i < n; i++)
            answer = max(answer, v[i] - v[0]);

        // Check the maximum difference between the last element and any other element
        for (int i = 0; i < n - 1; i++)
            answer = max(answer, v[n - 1] - v[i]);

        // Check the maximum difference between consecutive elements
        for (int i = 0; i < n - 1; i++)
            answer = max(answer, v[i] - v[i + 1]);

        // Output the maximum difference found
        cout << answer << endl;
    }
    return 0;
}

// Time Complexity (TC): O(n) = O(2000)
// Space Complexity (SC): O(n) = O(2000)
