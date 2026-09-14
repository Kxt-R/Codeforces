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
    vi v(n);for(int i=0;i<n;++i) cin>>v[i];
    if(k==1){
        cout<<*max_element(v.begin(),v.end())<<'\n';
        return;
    }
    priority_queue<int> h;
    vector<int> mn(n+1);
    int sum=0;
    for(int i=0;i<k-1;++i){
        sum+=v[i];
        h.push(v[i]);
    }
    mn[k-1]=sum;
    for(int i=k-1;i<n;++i){
        sum+=v[i];
        h.push(v[i]);
        int rev=h.top();
        h.pop();
        sum-=rev;
        mn[i+1]=sum;
    }
    int mx=v[n-1];
    int ans=-INF;
    for(int i=n-1;i>=k-1;--i){
        mx=max(mx,v[i]);
        ans=max(ans,k*mx-mn[i]);
    }
    cout<<ans<<'\n';
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