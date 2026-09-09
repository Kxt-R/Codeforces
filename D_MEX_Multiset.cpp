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
    string s="";
    int n;cin>>n;
    vi v(n);for(int i=0;i<n;i++)cin>>v[i];
    map<int,int> m;
    for(auto x:v) m[x]++;

    if(m[0]==0){
        cout<<"YES\n";
        for(int i=0;i<n;i++) s.push_back('A');
        cout<<s<<'\n';
        return;
    }

    if(m[0]==1){
        cout<<"NO\n";
        return;
    }
    int x=0;
    for(int i=1;i<n;i++){
        if(m[i]<=1) {
            x=i;
            break;
        }
    }

    map<int,int> count;
    for(int i=0;i<n;i++){
        if(v[i]<x){
            if(count[v[i]]==0) s.push_back('A');
            else if(count[v[i]]==1) s.push_back('B');
            else s.push_back('A');
            count[v[i]]++;
        }
        else s.push_back('C');
    }
    cout<<"YES\n"<<s<<'\n';
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