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
    int a,b;cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    vi v(6,0);
    for(int i=1;i<=5;i++){
        v[i]=(i+b)/5;
    }
    if(v[5]>0) v[5]--;
    ll sum=0;
    for(int i=1;i<=5;i++) sum+=v[i];
    ll ans=(a/5)*sum;
    for(int i=1;i<=(a%5);i++) ans+=v[i];
    cout<<ans;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    if ( t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}