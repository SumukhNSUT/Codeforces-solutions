// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n; // length of array
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         // agar starting mein hi good hai toh
//         // sum >= 0 and product = 1 for good array, calculating number of 1 and -1
//         int one = 0, minusone = 0;
//         for (int i = 0; i < n; i++) {
//             if (v[i] == 1) {
//                 one++;
//             }
//             else if (v[i] == -1) {
//                 minusone++;
//             }
//         }

//         if ((one >= minusone) && (minusone % 2 == 0)) {
//             // already good
//             cout << 0 << endl;
//         }
//         else {
//             // if not good, tell minimum no. of operations needed to make it good
//             if (minusone % 2 != 0 && one > 0) {
//                 cout << 1 << endl;
//             }
//             else if (minusone % 2 != 0 && one == 0) {
//                 cout << 3 << endl;
//             }
//             else {
//                 cout << 2 << endl;
//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    ll ans = 0, pos = 0, neg = 0;

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
            neg++;
        else
            pos++;
    }

    while (!((pos - neg) >= 0 and neg % 2 == 0))
    {
        neg--;
        pos++;
        ans++;
    }

    cout << ans << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

}