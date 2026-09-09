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
    int n,d;cin>>n>>d;
    vi v(n);for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    if(n==1) {
        cout<<0<<'\n';
        return;
    }
    int sum=0;
    if(v[1]-v[0]<d) {
        sum+=d-(v[1]-v[0]);
        v[0]-=d-(v[1]-v[0]);
    }
    if(v[0]<0) {
        sum+=v[0];
        v[0]=0;
    }
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]<d) {
            sum+=d-(v[i+1]-v[i]);
            v[i+1]=v[i]+d;
        }
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