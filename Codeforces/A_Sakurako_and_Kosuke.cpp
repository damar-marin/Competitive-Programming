#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n;

    cin >> n;

    (n % 2 == 0) ? cout << "Sakurako" << endl : cout << "Kosuke" << endl;
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
