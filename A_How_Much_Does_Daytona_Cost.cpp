// #include <bits/stdc++.h>
// using namespace std;

// bool maxfreq(vector<int>& v, int start, int end, int k) {
//     // check if k is the highest frequency element of vector v in segment of v from index start to end
//     unordered_map<int, int> freqMap;
//     for (int i = start; i <= end; i++) {
//         freqMap[v[i]]++;
//     }

//     int kFreq = freqMap[k];
//     int maxFreq = 0;

//     for (const auto& it : freqMap) {
//         if (it.second > maxFreq) {
//             maxFreq = it.second;
//         }
//     }
//     return kFreq == maxFreq;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         bool flag = false;

//         for (int start = 0; start < n; start++) {
//             for (int end = start; end < n; end++) {
//                 if (maxfreq(v, start, end, k)) {
//                     flag = true;
//                     break;
//                 }
//             }
//             if (flag) break;
//         }

//         if (flag == true) {
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int ai;
            cin >> ai;
            if (ai == k) {
                found = true;
            }
        }
        if (found) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
