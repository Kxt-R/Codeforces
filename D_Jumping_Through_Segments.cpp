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

bool check(int jump,vi &l,vi &r){
    int lft=0,rgt=0;
    for(int i=0;i<l.size();i++){
        int li=l[i];
        int ri=r[i];

        lft=max(lft-jump,li);
        rgt=min(rgt+jump,ri);

        if(lft>rgt) return false;

    }
    return true;
}

void solve() {
    int n,mx=0;
    cin>>n;
    vi l(n);
    vi r(n);
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        mx=max(r[i],mx);
    }
    int low=0,high=mx,mid,ans;
    while(low<=high){
        mid= low + (high-low)/2;
        if(check(mid,l,r))
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
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