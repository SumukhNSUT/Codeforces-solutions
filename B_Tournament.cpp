#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // a[j - 1] lowest and k = 1 then NO, else YES
        int mini = a[0];
        for (int i = 0; i < n; i++) {
            mini = min(mini, a[i]);
        }

        if (a[j - 1] == mini && k == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

    }
    return 0;
}
