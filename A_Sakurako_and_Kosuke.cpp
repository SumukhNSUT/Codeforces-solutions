#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 0;
        int i = 1;


        while (true) {
            x -= (2 * i - 1);
            if (abs(x) > n) {
                cout << "Sakurako" << endl;
                break;
            }

            i++;

            x += (2 * i - 1);
            if (abs(x) > n) {
                cout << "Kosuke" << endl;
                break;
            }

            i++;
        }
    }
    return 0;
}
