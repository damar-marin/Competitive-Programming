#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int arrGCD = a[0];
    for (int i = 1; i < n; i++) {
        arrGCD = gcd(arrGCD, a[i]);
    }

    for (int i = 0; i < n; i++) {
        a[i] /= arrGCD;
    }

    unordered_map<int, bool> primes;

    for (auto c : a) {
        for (int i = 2; i * i <= c; i++) {
            if (c % i == 0) {
                if (primes[i]) {
                    cout << "NO" << endl;
                    return;
                }
                primes[i] = true;
                while (c % i == 0) {
                    c /= i;
                }
            }
        }
        if (c > 1) {
            if (primes[c]) {
                cout << "NO" << endl;
                return;
            }
            primes[c] = true;
        }
    }

    cout << "YES" << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
