#include <bits/stdc++.h>
using namespace std;

void solve() {
    unordered_map<int, int> freq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    if (freq.size() == 1) {
        cout << "Yes" << endl;
        return;
    }

    if (freq.size() > 2) {
        cout << "No" << endl;
        return;
    }

    auto it = freq.begin();
    int count1 = it->second;
    it++;
    int count2 = it->second;

    if (count1 == count2 || abs(count1 - count2) == 1) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        solve();
    }

    return 0;
}
