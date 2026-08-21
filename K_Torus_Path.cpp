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
    int n;cin>>n;
    int sum=0;
    vi v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;cin>>x;
            if(i+j==n-1){
                v.push_back(x);
            }
            sum+=x;
        }
    }
    int ans=-1;
    for(auto ele:v){
        ans=max(ans,sum-ele);
    }
    cout<<ans;
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