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
    int n,m;cin>>n>>m;
    vector<bool> v(26);
    for(int i=0;i<n;i++){
        string s;cin>>s;
        char c=s[0];
        v[c-'a']=1;
    }
    bool flag=true;
    for(int i=0;i<m;i++){
        string s;cin>>s;
        for(auto c:s){
            if(v[c-'A']!=1){
                flag=0;
            }
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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