#include <bits/stdc++.h>
using namespace std;

int points[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int total_points = 0;

        for (int i = 0; i < 10; i++) {
            string row;
            cin >> row;

            for (int j = 0; j < 10; j++) {
                if (row[j] == 'X') {
                    total_points += points[i][j];
                }
            }
        }

        results.push_back(total_points);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}