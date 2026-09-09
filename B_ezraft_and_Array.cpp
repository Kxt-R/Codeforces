#include <bits/stdc++.h>
using namespace std;

#define int long long

using vi  = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using pll = pair<long long, long long>;

#define all(x)      begin(x), end(x)
#define rall(x)     rbegin(x), rend(x)
#define sz(x)       static_cast<int>((x).size())

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes(x) cout << ((x) ? "YES\n" : "NO\n")

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const int INF = 4e18;

int dp[53];
void run(){
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<=50;i++){
        dp[i]=dp[i-1]*2;
    }
}

void solve() {
    int n;cin>>n;
    if(n==2) {
        cout<<-1<<'\n';
        return;
    }
    for(int i=1;i<=n;i++) cout<<dp[i]<<' ';
    cout<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    run();
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}