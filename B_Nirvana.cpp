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

ll digitproduct(ll n){
    ll prod=1;
    while(n){
        prod*=(n%10);
        n/=10;
    }
    return prod;
}

void solve() {
    ll n;cin>>n;
    ll x=n,ans=digitproduct(n);
    ll k=1;
    while(x>0){
        ll possible=(x-1)*k +k-1;
        ans=max(digitproduct(possible),ans);
        k*=10;
        x/=10;
    }

    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    if (t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}