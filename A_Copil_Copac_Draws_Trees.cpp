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
    int n;
    cin>>n;
    int count=0;
    vector<bool> active(n+1,0);
    vector<bool> done(n,0);
    vector<pair<int,int>> edge(n);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        edge[i]={u,v};
    }
    active[1]=1;
    int ans=0;
    
    while(count!=n-1){
        ans++;
        for(int i=1;i<n;i++){
            if(!done[i]){
                int u=edge[i].first;
                int v=edge[i].second;
                if(active[u] || active[v]){
                    active[v]=1;
                    active[u]=1;
                    done[i]=1;
                    count++;
                }
            }
        }
    }

    cout<<ans<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}