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
    int n,k;cin>>n>>k;
    int x=n;
    vi v;
    for(int i=2;i*i<=x and v.size()<k-1;i++){
        while(x%i==0 and v.size()<k-1){
            v.push_back(i);
            x/=i;
        }
    }
    if(x!=1) v.push_back(x);
    if(v.size()!=k){
        cout<<-1;
        return;
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<' ';
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