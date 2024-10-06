#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    if (a.size() < 3){
        cout << "-1" << endl;
        return;
    }

    i64 sum = 0;
    
    for (int i = 0; i < n; i++){
        sum += a[i];
    }

    sort(a.begin(), a.end());

    i64 ans;

    ans = max(0LL, a[n/2] * 2 * n - sum + 1);

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
