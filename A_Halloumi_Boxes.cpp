#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int NoOfTestCase;
    cin >> NoOfTestCase;

    for (int testcaseno = 1; testcaseno <= NoOfTestCase; testcaseno++) {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        bool isSorted = is_sorted(v.begin(), v.end());

        if (isSorted) {
            cout << "NO" << '\n';
            continue;
        }

        if (k == 1) {
            cout << "NO" << '\n';
            continue;
        }
        else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}