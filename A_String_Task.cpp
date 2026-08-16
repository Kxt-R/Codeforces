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
    vector<char> v={'a','e','i','o','u','y'};
    string s;cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        bool vwl=false;
        char x=tolower(s[i]);
        for(int j=0;j<6;j++){
            if(x==v[j]){
                vwl=true;
                break;
            }
        }
        if(!vwl) cout<<'.'<<x;
    }
    cout<<'\n';
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