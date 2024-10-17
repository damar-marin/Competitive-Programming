#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    i64 n;

    cin >> n;

    i64 current = n;

    i64 sum = current;

    //cout << current << " " << ((current-1)>>1) << endl;

    while (current > 0){
        if (current % 2 == 0){
            current = current>>1;
            sum += current;
        }
        else{
            current = (current-1)>>1;
            sum += current;
        }
    }

    cout << sum << endl;
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
