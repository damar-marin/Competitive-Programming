#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n, t;

    cin >> n >> t;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int l = 0, r = 0;

    int bookSum = 0;
    int maxSize = 0;

    while (l < n && r < n){
        while (r < n){
            bookSum += a[r];
            r++;
            if(bookSum > t){
                r--;
                bookSum -= a[r];
                break;
            }
        }

        maxSize = max(maxSize, r - l);
        bookSum -= a[l];
        l++;
    }

    cout << maxSize << endl;
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
