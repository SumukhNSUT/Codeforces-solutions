#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        int operations = 0;

        if (k == 1) {
            operations = n; // If k is 1, we need n operations to make n zero
        }
        else {
            while (n > 0) {
                operations += n % k; // Add the remainder when n is divided by k
                n /= k; // Reduce n by dividing it by k
            }
        }

        cout << operations << endl;
    }

    return 0;
}
