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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        char c = s[0];
        int maxi = freq[c];
        char m;
        int mini = INT_MAX;
        for (auto it : freq) {
            if (it.second > maxi) {
                maxi = it.second;
                c = it.first;
            }
            if (it.second < mini) {
                mini = it.second;
                m = it.first;
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == m) {
                s[i] = c;
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}
