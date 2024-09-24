#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n = 0, k = 0;
    int money = 0;
    int count = 0;

    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] >= k){
            money += a[i];
        }
        if ((a[i] == 0) && (money > 0)){
            money -= 1;
            count += 1;
        }
    }

    cout << count << endl;


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
