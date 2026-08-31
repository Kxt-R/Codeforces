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

int query(int u,int v,int d){
    cout<<"? "<<u<<' '<<v<<' '<<d<<endl;
    int x;cin>>x;
    return x;
}

void solve() {
    int n;cin>>n;
    int u=1,max_dis=0;
    for(int i=2;i<=n;i++){
        while(query(1,i,max_dis+1)==1){
            u=i;
            max_dis++;
        }
    }
    int v=1;
    for(int i=1;i<=n;i++){
        while(query(u,i,max_dis+1)==1){
            v=i;
            max_dis++;
        }
    }

    cout<<"! "<<u<<' '<<v<<' '<<max_dis<<endl;
}

signed main() {
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}