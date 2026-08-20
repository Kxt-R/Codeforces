#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x)      begin(x), end(x)
#define rall(x)     rbegin(x), rend(x)
#define sz(x)       static_cast<int>((x).size())

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const ll INF  = 4e18;

void solve() {
    int n;cin>>n;
    vll v(n); for(int i=0;i<n;i++) cin>>v[i];
    vll u=v;
    sort(all(u));

    vll prefix_v(n+1);
    prefix_v[1]=v[0];
    for(int i=2;i<=n;i++){
        prefix_v[i]=prefix_v[i-1]+v[i-1];
    }
    vll prefix_u(n+1);
    prefix_u[1]=u[0];
    for(int i=2;i<=n;i++){
        prefix_u[i]=prefix_u[i-1]+u[i-1];
    }
    int q;cin>>q;
    while(q--){
        int l,r,t;cin>>t>>l>>r;
        if(t==1){
            cout<<prefix_v[r]-prefix_v[l-1]<<'\n';
        }
        else{
            cout<<prefix_u[r]-prefix_u[l-1]<<'\n';
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    if (t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}