#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int s = 0, e = str.length() - 1;
        int len = 0;

        while (s < e) {
            if (str[s] != str[e]) {
                len += 2;
            }
            else {
                break;
            }

            s++;
            e--;
        }

        cout << str.length() - len << "\n";
    }

    return 0;
}
