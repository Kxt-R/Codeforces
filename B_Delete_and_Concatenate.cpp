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
    int n,c;
    cin>>n>>c;
    vector<int> v(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<v[0]-c<<'\n';
        return;
    }
    sort(v.begin(),v.end());
    int idx=n/2 -1;
    while(idx>=0){
        if(v[idx]>=c){
            idx--;
        }
        else break;
    }
    int first=idx;
    int last=n-1;
    while(first>=0){
        ans+=v[last];
        ans-=c;
        first--;
        last--;
    }
    while(last>idx){
        ans+=v[last];
        ans-=c;
        last--;
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