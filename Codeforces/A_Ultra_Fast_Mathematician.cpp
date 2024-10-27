#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    string a, b;
    cin >> a >> b;
    string result;

    for (int i = 0; i < a.size(); i++) {
        result += (a[i] == b[i]) ? '0' : '1';
    }

    cout << result << endl;
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
