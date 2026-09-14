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
    int n,k;cin>>n>>k;
    vi v(n);for(int i=0;i<n;i++) cin>>v[i];
    int sum=0,idx=0,mx=-1;
    while(idx<n){
        sum+=v[idx];
        mx=max(mx,v[idx]);
        idx++;
        if(sum>k) break;
    }
    if(sum<=k) {
        cout<<n<<'\n';
        return;
    }
    sum-=mx;
    while(idx<n){
        sum+=v[idx];
        if(sum>k) break;
        idx++;
    }
    cout<<idx<<'\n';
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