#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n;
    
    cin >> n;

    int a;

    int plus = 0, minus = 0;

    for (int i = 0; i < n; i++){
        cin >> a;
        if (i % 2 == 0){
            plus += a;
        }
        else{
            minus += a;
        }
    }

    cout << plus - minus << endl;
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
