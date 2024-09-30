#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n = 0;
    cin >> n;

    vector<int> evenA;
    vector<int> oddA;

    int element = 0;
    for (int i = 0; i < n; i++){
        cin >> element;
        if (i % 2){
            oddA.push_back(element);
        }
        else{
            evenA.push_back(element);
        }
    }

    int maxOdd = 0, maxEven = 0;

    if (!oddA.empty()) {
        maxOdd = *max_element(oddA.begin(), oddA.end());
    }
    if (!evenA.empty()) {
        maxEven = *max_element(evenA.begin(), evenA.end());
    }

    bool odd = false;
    int max = 0;

    if (maxOdd > maxEven){
        odd = true;
        max = maxOdd;
    }
    else{
        odd = false;
        max = maxEven;
    }

    int size = odd ? oddA.size() : evenA.size();
    int ans = max + size;

    cout << ans << endl;

    evenA.clear();
    oddA.clear();
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
