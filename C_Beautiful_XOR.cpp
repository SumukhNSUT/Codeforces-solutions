#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << "\n";
        }
        else if (a < b) {
            cout << -1 << endl;
        }
        else {
            long long c = a ^ b;
            if (c < a) {
                cout << 1 << endl << c << endl;

            }
            else {
                long long ans1 = b;
                long long ans2 = a;

                cout << 2 << endl << a << " " << b << endl;

            }
        }
    }
    return 0;
}
