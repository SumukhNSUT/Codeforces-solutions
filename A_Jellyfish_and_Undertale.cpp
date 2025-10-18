#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(), (x).end()
template<class T> inline void chmin(T& a, const T& b) { if (b < a) a = b; }
template<class T> inline void chmax(T& a, const T& b) { if (a < b) a = b; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b;
        int n;
        cin >> a >> b >> n;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long x = 0;
        for (int i = 0; i < n; i++) {
            x += min(v[i] + 1, a);
        }

        long long ans = b + x - n;
        cout << ans << "\n";
    }
    return 0;
}
