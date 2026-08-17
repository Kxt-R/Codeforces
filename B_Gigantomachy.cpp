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
    vi va(n+1,0); for(int i=0;i<n;i++) cin>>va[i];
    vi vb(m+1,0); for(int i=0;i<m;i++) cin>>vb[i];

    ll counta=0;
    for(int i=0;i<n;i++){
        counta+=va[i]-va[i+1]+1;
    }

    ll countb=0;
    for(int i=0;i<m;i++){
        countb+=vb[i]-vb[i+1]+1;
    }
    if(counta>=countb) cout<<1<<'\n';
    else cout<<2<<'\n';

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