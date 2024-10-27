#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    i64 n = 0, m = 0, r = 0, c = 0;
    cin >> n >> m >> r >> c;

    bool newRow = false;
    i64 ans = 0;

    for (int i = c + 1; i <= m; i++){
        ans += 1;
    }

    for (i64 i = r + 1; i <= n; i++){
        ans += ((2*m)-1);
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