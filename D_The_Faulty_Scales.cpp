#include <bits/stdc++.h>
using namespace std;
//25CS10164
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
    vi v(n);
    vector<pii> s(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        s[i]={v[i],i};
    }
    sort(s.begin(),s.end());
    vll prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]+=v[i]+prefix[i-1];
    }
    ll ans=INT_MAX;
    for(int i=1;i<n-1;i++){
        ll left=prefix[i-1];
        ll right=prefix[n-1]-prefix[i-1];
        ll dif=abs(left-right);
        ans=min(ans,dif);
    }
    for(int i=1;i<n-1;i++){
        ll left=prefix[i-1];
        ll right=prefix[n-1]-prefix[i-1];
        ll dif=abs(left-right);
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