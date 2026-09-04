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
    int s,q;cin>>s>>q;
    deque<int> v;
    for(int i=sqrt(s);i>=1;i--){
        if(s%i==0){
            if(s/i==i)v.push_front(i);
            else{
                v.push_back(s/i);
                v.push_front(i);
            }
        }
    }
    vi prefix(v.size());
    prefix[0]=v[0];
    for(int i=1;i<v.size();i++) prefix[i]=prefix[i-1]+v[i];

    while(q--){
        int x,y;cin>>x>>y;
        int count=x,ans=0;
        auto it=upper_bound(v.begin(),v.end(),y);
        int small=it-v.begin();
        int big=v.size()-small;
        cout<<"s="<<small<<" b="<<big<<'\n';
        if(count>=big){
            ans+=(big*y);
        }
        else ans+=count*y;
        count-=big;
        cout<<"count="<<count<<" ans="<<ans<<'\n';
        if(count>0){
            if(count>=small) ans+=prefix[small-1];
            else {
                ans+=prefix[small-1]-prefix[small-count-1];
            }
            count-=small;
        }
        cout<<"count="<<count<<" ans="<<ans<<'\n';
        if(count>0){
            ans+=count;
        }
        cout<<ans<<'\n';
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