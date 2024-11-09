#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        // agar consecutive 3 dots hai kahi bhi toh 2 ans hoga
        // agar 3 se kam hai consecutive dots, toh sabhi ka add kr do

        // 0 dot - 0
        // 1 dot - 1
        // 2 dot - 2
        // 3 dot - 2
        int n;
        string s;
        cin >> n;
        cin >> s;

        int ans = 0;

        int dot, hash;
        for (int i = 0; i < n - 2; i++) {
            // check for consecutive 3 dots
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                ans = 2;
                // cout << ans << endl;
            }
        }
        if (ans != 2) {
            for (int i = 0; i < n; i++) {
                if (s[i] == '.') {
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else {
            cout << 2 << endl;
        }

    }
    return 0;
}