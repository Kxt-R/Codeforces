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

int n;
unordered_map<int,int> m;
int ask(int i){
    if(i==0 || i==n+1) return INT_MAX;
    if(m.contains(i)) return m[i];
    cout<<"? "<<i<<endl;
    int x;cin>>x;
    return x;
}

void solve() {
    cin>>n;
    int l=0,r=n+1;
    while(r-l>1){
        int m=(l+r)/2;
        int t=ask(m),tl=ask(m-1),tr=ask(m+1);
        if(tl>t and tr>t){
            cout<<"! "<<m<<endl;
            return;
        }
        else if(tl<t){
            r=m;
        }
        else {
            l=m;
        }
    }
}

int main() {
    int t = 1;
    if (t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}