#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a(int x) {
    return __builtin_popcount(x);
}

int b(int m, int n, vector<int>& p, const vector<bool>& u) {
    int f = ((1 << n) - 1) ^ m;
    int k = a(f);
    int lim = (1 << k);

    while (p[m] < lim) {
        int r = m;
        int t = p[m];
        int s = f;

        while (t > 0) {
            int i = __builtin_ctz(s);
            if (t & 1) r |= (1 << i);
            t >>= 1;
            s &= (s - 1);
        }

        if (!u[r]) return r;
        p[m]++;
    }
    return -1;
}

void c() {
    int n;
    if (!(cin >> n)) return;

    int sz = (1 << n);
    vector<bool> u(sz, false);
    vector<int> p(sz, 0);
    vector<int> r;
    r.reserve(sz);

    int g = sz - 1;
    r.push_back(g);
    u[g] = true;

    for (int i = 1; i < sz; ++i) {
        int x = b(g, n, p, u);

        if (x == -1) {
            int best = sz + 1;

            for (int k = 1; k <= a(g); ++k) {
                auto d = [&](auto self, int m, int t, int s) -> void {
                    if (t == 0) {
                        int y = b(m, n, p, u);
                        if (y != -1 && y < best) best = y;
                        return;
                    }
                    for (int j = s; j < n; ++j) {
                        if (m & (1 << j))
                            self(self, m ^ (1 << j), t - 1, j + 1);
                    }
                    };
                d(d, g, k, 0);
                if (best < sz) break;
            }
            x = (best > sz) ? b(0, n, p, u) : best;
            g &= x;
        }

        r.push_back(x);
        u[x] = true;
    }

    for (int i = 0; i < sz; ++i) {
        cout << r[i] << (i + 1 == sz ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) c();
    return 0;
}
