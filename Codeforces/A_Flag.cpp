#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n, m;

    cin >> n >> m;

    vector<string> a(n);

    for (int i = 0; i < n; i++){
            cin >> a[i];
    }

    char color = '_';

    for (int i = 0; i < n; i++){
        if (color == a[i][0]){
            cout << "NO" << endl;
            return;
        }
        color = a[i][0];
        for (int j = 0; j < m; j++){
            if(a[i][j] != color) {
                cout << "NO" << endl;
                return;
            }
            color = a[i][j];
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
