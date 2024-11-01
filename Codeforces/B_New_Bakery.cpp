#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    i64 n, a , b;

    cin >> n >> a >> b;

    i64 ans;

    if (b <= a){
        ans = a*n;
        cout << ans << endl;
        return;
    }

    //cout << a << " " << n << " " << b << endl;

    i64 k;

    k = min(b-a+1, n);

    ans = (b - k + 1) * n + k * (k - 1) / 2;

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
