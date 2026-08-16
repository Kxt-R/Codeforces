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
    string s,a; cin>>s>>a;
    int n=s.size();
    if(n!=a.size()){
        cout<<"NO"<<'\n';
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='s' && a[n-1-i]=='t'){
            continue;
        }
        else if(s[i]!=a[n-1-i]){
            cout<<"NO"<<'\n';
            return;
        }
    }
    cout<<"YES"<<'\n';
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