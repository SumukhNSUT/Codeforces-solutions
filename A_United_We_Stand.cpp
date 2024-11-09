#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b;
        vector<int> c;

        sort(a.begin(), a.end());
        // push smallest element from a to b
        int index = 0;
        while (index < n && a[index] == a[0]) {
            b.push_back(a[index]);
            index++;
        }
        // push remaining in c
        while (index < n) {
            c.push_back(a[index]);
            index++;
        }

        // if c.size() == 0, print -1
        if (c.size() == 0) {
            cout << -1 << endl;
        }
        else {
            cout << b.size() << " " << c.size() << endl;
            // now print b and c vector
            for (auto it : b) {
                cout << it << " ";
            }
            cout << endl;
            for (auto it : c) {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
