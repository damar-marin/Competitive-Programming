#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n, x;

    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int l = 0, r = 0;

    int subSum = 0;
    int sumCount = 0;

    while (l < n && r < n){
        while (r < n){
            subSum += a[r];
            r++;
            if(subSum == x){
                sumCount += 1;
                break;
            }
            if(subSum > x){
                r--;
                subSum -= a[r];
                break;
            }
        }
        subSum -= a[l];
        l++;
    }

    cout << sumCount << endl;
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
