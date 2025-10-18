#include <iostream>
using namespace std;
// 0 0 1 1 1
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int>ans;
        for (int i = 0;i < n;i++) {
            if (s[i] == '0') ans.push_back(i);
        }
        cout << ans.size() << endl;
        for (auto x : ans) cout << x + 1 << " ";
        cout << endl;
    }
    return 0;
}