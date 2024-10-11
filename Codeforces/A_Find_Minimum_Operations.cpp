#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n, k;

    cin >> n >> k;

    if (k == 1){
        cout << n << endl;
        return;
    }

    int ans = 0;

    while (n){
        ans += n % k;
        n /= k;
    }

    cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
