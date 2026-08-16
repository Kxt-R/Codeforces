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
    int n;cin>>n;
    vi v(n);for (int i=0;i<n;i++) cin>>v[i];
    int counteven=0,countodd=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==1) countodd++;
        else counteven++;
    }
    if(counteven%2==0){
        cout<<"YES\n";
        return;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]+1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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