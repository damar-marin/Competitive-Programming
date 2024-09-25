#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n = 0, k = 0;

    cin >> n >> k;

    int leaves = 0;

    leaves += (n + 1) * n / 2 - (n - k) * (n - k + 1) / 2;

    if (leaves % 2 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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
