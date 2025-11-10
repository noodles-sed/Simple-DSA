#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long ops = 0;
        bool ok = true;

        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;
                ops++;
            }
            if (a[i] >= a[i + 1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? ops : -1) << "\n";
    }
    return 0;
}
