#include <bits/stdc++.h>
using namespace std;

string reverse(string str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;

        string b = a;
        for (int i = 0; i < b.length(); i++) {
            if (b[i] == 'p') {
                b[i] = 'q';
            }
            else if (b[i] == 'q') {
                b[i] = 'p';
            }
        }
        cout << reverse(b) << endl;
    }
    return 0;
}
