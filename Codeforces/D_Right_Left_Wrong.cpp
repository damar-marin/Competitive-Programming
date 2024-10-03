#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
    int n;

    cin >> n;

    vector<i64> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> pSum(n);

    pSum[0] = a[0];

    for (int i = 1; i < n; i++){
        pSum[i] = pSum[i-1] + a[i];
    }

    string s;

    cin >> s;

    i64 indexR = n - 1, indexL = 0;

    i64 ans = 0;

    bool stop = false;

    bool l = false, r = false;

    while(!stop){
        stop = true;
        for (int i = indexR; i >= indexL; i--){
        if (s[i] == 'R'){
            indexR = i;
            r = true;
            break;
            }
        }
        for (int i = indexL; i < indexR; i++){
            if (s[i] == 'L'){
                indexL = i;
                l = true;
                break;
            }
        }
        if (l && r){
            if (indexL == 0){
                ans += pSum[indexR];
            }
            else{
                ans += pSum[indexR] - pSum[indexL - 1];
            }
            indexL++;
            indexR--;
            stop = false;
        }
        l = false;
        r = false;
    }

    cout << ans << endl;
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
