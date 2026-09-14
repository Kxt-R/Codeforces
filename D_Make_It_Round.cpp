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

void solve() {
    int n,m;cin>>n>>m;
    int c2=0,c5=0;
    int temp=n;
    while(temp%2==0){
        temp/=2;
        c2++;
    }
    while(temp%5==0){
        temp/=5;
        c5++;
    }
    int fac=1;
    while(fac*2<=m and c2<c5){
        fac*=2;
        c2++;
    }
    while(fac*5<=m and c5<c2){
        fac*=5;
        c5++;
    }
    while(fac*10<=m){
        fac*=10;
    }
    if(fac==1){
        cout<<n*m<<'\n';
        return;
    }
    for(int i=9;i>=2;--i){
        if(fac*i<=m){
            fac*=i;
            break;
        }
    }
    cout<<n*fac<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}