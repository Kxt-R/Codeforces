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
    int a,b;cin>>a>>b;
    vector<vector<int>> pos={{a,b},{-a,b},{a,-b},{-a,-b},{b,a},{-b,a},{b,-a},{-b,-a}};
    set<pii> s;
    int kx,ky;cin>>kx>>ky;
    int qx,qy;cin>>qx>>qy;
    for(int i=0;i<8;i++){
        int nx=kx+pos[i][0];
        int ny=ky+pos[i][1];
        s.insert({nx,ny});
    }
    int count=0;
    for(int i=0;i<8;i++){
        int nx=qx+pos[i][0];
        int ny=qy+pos[i][1];
        if(s.contains({nx,ny})){
            count++;
        }
    }
    if(a==b) count/=2;
    cout<<count<<'\n';
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