#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int a, b;

    cin >> a >> b;

    if ((a % 2 == 0) && (a != 0)){
        cout << "YES" << endl;
        return;
    }

    if ((a == 0) && (b % 2 == 0)){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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
