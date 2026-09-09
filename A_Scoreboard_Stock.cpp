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
    vi v(10);for (int i=0;i<10;i++) cin>>v[i];
    int x=v[0];
    bool flag=true;
    int mn=50,fac;
    for(int i=0;i<10;i++){
        if(v[i]<mn){
            mn=v[i];
            fac=i;
        }
    }
    if(fac==0 and mn==0){
        cout<<-1<<'\n';
        return;
    }
    if(fac==0){
        bool d=false;
        for(int i=1;i<10;i++){
            if(v[i]==mn){
                fac=i;
                d=true;
                break;
            }
        }
        if(!d){
            string s(mn+1,'9');
            cout<<s<<'\n';
            return;
        }
    }
    char ch='0'+fac;
    string s(mn,ch);
    char c= '0'+(fac-1);
    s+=c;
    cout<<s<<'\n';
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