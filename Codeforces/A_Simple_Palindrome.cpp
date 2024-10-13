#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n;

    cin >> n;

    string s = "";

    int mod = 0;

    for (int i = 0; i < n; i++){
        mod = i % 5;
        switch(mod){
            case 0: 
            s.push_back('a');
            break;
            case 1: 
            s.push_back('e');
            break;
            case 2: 
            s.push_back('i');
            break;
            case 3: 
            s.push_back('o');
            break;
            case 4: 
            s.push_back('u');
            break;
        }
    }

    sort(s.begin(), s.end());

    cout << s << endl;

    s.clear();
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
