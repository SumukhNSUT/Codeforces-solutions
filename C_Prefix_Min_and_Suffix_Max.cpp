#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define m1 cout << "-1\n";
#define no cout << "NO\n";

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const long double EPS = 1e-9;
const int MAXN = 1e5 * 5;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vec<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "1" << endl;
        return;
    }

    vec<int> pmin(n);
    pmin[0] = a[0];
    for (int i = 1; i < n; ++i) {
        pmin[i] = min(pmin[i - 1], a[i]);
    }

    vec<int> smax(n);
    smax[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        smax[i] = max(smax[i + 1], a[i]);
    }

    string ans = "";
    for (int i = 0; i < n; ++i) {
        int left_min = (i == 0) ? INT_MAX : pmin[i - 1];
        int right_max = (i == n - 1) ? INT_MIN : smax[i + 1];

        if (a[i] < left_min || a[i] > right_max) {
            ans += '1';
        }
        else {
            ans += '0';
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
