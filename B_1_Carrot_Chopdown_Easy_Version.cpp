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
    int n,m;cin>>n>>m;
    vi v(n); for(int i=0;i<n;i++) cin>>v[i];
    vi count1(m+1,0);
    vi count2(m+2,0);
    count2[1]=n;
    for(int i=0;i<n;i++){
        count1[v[i]]++;
        count2[v[i]+1]--;
    }
    for(int i=2;i<m+1;i++) count2[i]+=count2[i-1];
    int ans=-1;
    for(int i=1;i<=m;i++){
        int temp=0;
        temp+=count2[i];
        if(i*2<=m){
            temp+=count1[2*i];
        }
        ans=max(ans,temp);
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