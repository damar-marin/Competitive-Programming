#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    string s;

    cin>> s;

    for (int i = 0; i < s.length(); i++){
        if (s[i] == '.'){
            cout << 0;
        }
        if (s[i] == '-'){
            if (s[i+1] == '.'){
                cout << 1;
                i++;
            }
            else if (s[i+1] == '-'){
                cout << 2;
                i++;
            }
        }
    }
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
