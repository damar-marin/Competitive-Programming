#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve() {
    int n, r;

    cin >> n >> r;

    vector<int> a(n);


    int happy = 0;
    int happyCouple = 0;
    int unhappy = 0;
    int available = r;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] % 2 == 0){
            happyCouple += (a[i]/2);
        }
        else{
            happyCouple += (a[i]/2);
            unhappy += 1;
        }
    }

    happy = happyCouple * 2;
    available -= happyCouple;

    if (available >= unhappy){
        happy += unhappy;
        cout << happy << endl;
        return;
    }

    while ((available > 0)){
        //cout << available << endl;
        available -= 1;
        unhappy -= 2;
        if (unhappy == 1){
            happy += 1;
            available--;
            break;
        }
        if (unhappy == 0){
            break;
        }
    }

    happy += available * 2;

    cout << happy << endl;

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
