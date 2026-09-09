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

void dfs(int u,int p,int pid, vector<vector<pii>> &graph,vi &dp){
    for(auto &pr:graph[u]){
        int v=pr.first;
        int i=pr.second;
        
        if(v==p) continue;
        if(i>pid){
            dp[v]=dp[u];
        }
        else {
            dp[v]=dp[u]+1;
        }
        dfs(v,u,i,graph,dp);
    }
}

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
    vector<vector<pii>> graph(n+1);
    for(int i=1;i<n;i++){
        graph[edge[i].first].push_back({edge[i].second,i});
        graph[edge[i].second].push_back({edge[i].first,i});
    }
    vector<int> dp(n+1);
    dp[1]=1;
    dfs(1,0,0,graph,dp);
    int ans=-1;
    for(int i=1;i<=n;i++) ans=max(dp[i],ans);
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