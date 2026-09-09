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
    int n,w;cin>>n>>w;
    vi v(n+1);
    for(int i=1;i<=n;++i) cin>>v[i];
    vi ans(n+2);
    while(w--){
        int l,r,t;cin>>l>>r>>t;
        ans[l]+=t;
        ans[r+1]-=t;
    }
    for(int i=2;i<=n;++i){
        ans[i]+=ans[i-1];
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(ans[i]<v[i]) count++;
    }
    cout<<count<<'\n';
    for(int i=1;i<=n;i++){
        if(ans[i]<v[i]) cout<<i<<' ';
    }
    cout<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}