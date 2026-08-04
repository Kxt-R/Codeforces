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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string compresed;
    int idx=0;
    while(idx<n){
        char a=s[idx];
        compresed.push_back(a);
        while(idx<n and s[idx]==a){
            idx++;
        }
    }
    int csize=compresed.size();
    if(csize<=2){
        cout<<csize<<'\n';
        return;
    }
    bool m2=false,m1=false;
    for(int i=1;i<n-1;i++){
        if(s[i]!=s[i+1] and s[i]!=s[i-1]){
            m1=true;
        }
        if(s[i-1]==s[i+1] and s[i]!=s[i-1]){
            m2=true;
        }
    }
    if(m2) cout<<csize-2<<'\n';
    else if(m1) cout<<csize-1<<'\n';
    else cout<<csize<<'\n';
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