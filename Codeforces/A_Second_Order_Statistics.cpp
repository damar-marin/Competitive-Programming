#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n;

    cin >> n;

    set<int> a;

    int element;

    for (int i = 0; i < n; i++){
        cin >> element;
        a.insert(element);
    }

    if (a.size() == 1){
        cout << "NO" << endl;
        return;
    }

    vector<int> b;

    for (auto c: a){
        b.push_back(c);
    }

    cout << b[1] << endl;
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
