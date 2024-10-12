#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n;

    cin >> n;

    int k = 0;

    if (n == 1){
        cout << 3 << endl;
        return;
    }

    if ((n&(n-1))==0){
        cout << n + 1 << endl;
        return;
    }

    /*int count = 0;

    while (!(n & (1<<k))){
        n = n >> 1;
        count += 1;
    }*/

   cout << (n & -n) << endl;
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
