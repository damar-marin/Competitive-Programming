#include <bits/stdc++.h>

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

using ll = long long;

template<typename S, typename T> void smax(S &a, const T &b) { if (a < b) a = b; }
template<typename S, typename T> void smin(S &a, const T &b) { if (a > b) a = b; }

#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
//#define int long long

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
    int n = 0;

    cin >> n;

    vector<ll> fighters(n);

    for (int i = 0; i < n; i++){
        cin >> fighters[i];
    }

    ll answer = 0;

    for (int i = n - 2; i > 0; i--){
        answer = (fighters[i] - fighters[i-1]);
        fighters[i - 1] = answer;
    }
    if (n < 3){
        answer = fighters[0];
    }
    if (n == 1){
        cout << answer << endl;
        return;
    }
    answer = fighters[n-1] - answer;
    cout << answer << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}
