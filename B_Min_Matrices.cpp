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
    if(n==1){
        if(k==1)cout<<1<<'\n';
        else cout<<-1<<'\n';
        return;
    }
    if(k<n or k>=2*n){
        cout<<-1<<'\n';
        return;
    }
    vector<vector<int>> v(n,vector<int>(n,0));
    int count=k-n+1;
    int itr=1;
    for(int i=0;i<count;++i){
        v[0][i]=itr++;
    }
    for(int i=1;i<n;++i){
        v[i][i]=itr++;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(v[i][j]==0) v[i][j]=itr++;
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<v[i][j]<<' ';
        }
        cout<<'\n';
    }
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