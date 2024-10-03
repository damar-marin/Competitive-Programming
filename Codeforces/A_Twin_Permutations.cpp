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

    vector<int> sorted(n);

    for (int i = 0; i < n; i++){
        sorted[i] = a[i];
    }

    sort(sorted.begin(), sorted.end());

    for(int i = 0; i < n; i++){
        cout << sorted[n - a[i]] << " ";
    }

    cout << endl;
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
