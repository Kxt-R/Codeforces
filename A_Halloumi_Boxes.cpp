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
    ll n,k;
    cin>>n>>k;
    int now,prev=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>now;
        if(now<prev){
            flag=false;
        }
        prev=now;
    }
    if(k>=2) cout<<"YES"<<"\n";
    else if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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