#include <bits/stdc++.h>
using namespace std;

#define int long long

using vi  = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using pll = pair<long long, long long>;

#define all(x)      begin(x), end(x)
#define rall(x)     rbegin(x), rend(x)
#define sz(x)       static_cast<int>((x).size())

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes(x) cout << ((x) ? "YES\n" : "NO\n")

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const int INF = 4e18;

vi c;
vi b;

void solve() {
    int count;cin>>count;
    int ans=0;
    while(1){
        if(count<2) break;
        auto it=upper_bound(c.begin(),c.end(),count)-1;
        count-=*it;
        ans++;
    }
    cout<<ans<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    b.push_back(0);
    c.push_back(0);
    int k=1;
    while(1){
        if(c[k-1]>1e9) break;
        b.push_back(b[k-1]+k);
        c.push_back((2*b[k]) + b[k-1]);
        k++;
    }
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}