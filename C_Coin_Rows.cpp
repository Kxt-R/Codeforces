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

void solve() {
    int m;cin>>m;
    vi v1(m+1),v2(m+1);
    for(int i=1;i<=m;++i) cin>>v1[i];
    for(int i=1;i<=m;++i) cin>>v2[i];
    vi prefix1(m+1),prefix2(m+1);
    for(int i=1;i<=m;i++){
        prefix1[i]=prefix1[i-1]+v1[i];
        prefix2[i]=prefix2[i-1]+v2[i];
    }
    int sum=INT_MAX;
    for(int i=1;i<=m;i++){
        sum=min(sum,max(prefix1[m]-prefix1[i],prefix2[i-1]));
    }
    cout<<sum<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}