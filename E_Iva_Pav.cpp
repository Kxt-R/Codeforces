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

bool binary(int l,int r,int k,vi &v){
    int x=~0;
    for(int i=l-1;i<=r-1;i++){
        x=x & v[i];
    }
    if(x>=k) return 1;
    else return 0;
}

void solve() {
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int q;
    cin>>q;
    while(q--){
        int l,k;
        cin>>l>>k;
        int ans=-1;
        int high=n,low=l;
        while(high>=low){
            int mid=low + (high-low)/2;
            if(binary(l,mid,k,v)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        cout<<ans<<" ";
    }
    cout<<'\n';
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