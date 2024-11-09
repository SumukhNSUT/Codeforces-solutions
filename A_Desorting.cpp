// // ith element se pehele wale or ith mein +1 and baad walon mein -1 hoga
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> n;
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
//         bool sorted = true;
//         // agar non-sorted hai, toh 0
//         for (int i = 0; i < n - 1; i++) {
//             if (v[i] > v[i + 1]) {
//                 sorted = false;
//                 cout << "0" << endl;
//             }
//         }
//         if (sorted) {
//             // pehele 2 aise elements lo jinme gap minimum hai

//             // vector<int> temp(n);
//             // for (int i = 0; i < n; i++) {
//             //     temp[i] = v[i];
//             // }
//             // sort(temp.begin(), temp.end());
//             // int maxgap = -1;
//             // int start = -1;
//             // int end = -1;
//             // for (int i = 0; i < n - 1; i++) {
//             //     int gap = temp[i + 1] - temp[i];
//             //     if (gap > maxgap) {
//             //         maxgap = gap;
//             //         start = temp[i];
//             //         end = temp[i + 1];
//             //     }

//             // }
//             int start = -1;
//             int end = -1;
//             int maxgap = -1;
//             for (int i = 0; i < n - 1; i++) {
//                 for (int j = i + 1; j < n; j++) {
//                     int gap = abs(v[i] - v[j]

//                         if (gap > maxgap && j > i) {
//                             maxgap = gap;
//                             start = v[i];
//                             end = v[j];
//                         }
//                 }
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

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll minDiff = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << 0 << nline;
            return;
        }
        else
        {
            minDiff = min(minDiff, (arr[i + 1] - arr[i]));
        }
    }

    cout << minDiff / 2 + 1 << nline;
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