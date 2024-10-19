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

    int min = 10e5;
    int dif = 0;
    pair<int, int> indexes;

    for (int i = 0; i < n; i++){
        if (i == 0){
            dif = abs(a[0] - a[n-1]);
            if (dif < min){
                min = dif;
                indexes.first = 0;
                indexes.second = n-1;
            }
            dif = abs(a[0] - a[1]);
            if (dif < min){
                min = dif;
                indexes.first = 0;
                indexes.second = 1;
            }
        }
        else if (i == n - 1){
            dif = abs(a[n-1] - a[0]);
            if (dif < min){
                min = dif;
                indexes.first = n-1;
                indexes.second = 0;
            }
            dif = abs(a[n-1] - a[n-2]);
            if (dif < min){
                min = dif;
                indexes.first = n-1;
                indexes.second = n-2;
            }
        }
        else{
            dif = abs(a[i] - a[i+1]);
            if (dif < min){
                min = dif;
                indexes.first = i;
                indexes.second = i+1;
            }
            dif = abs(a[i] - a[i-1]);
            if (dif < min){
                min = dif;
                indexes.first = i;
                indexes.second = i-1;
            }
        }
    }

    cout << indexes.first + 1 << " " << indexes.second + 1;
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