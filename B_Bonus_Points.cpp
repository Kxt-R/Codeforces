#include <bits/stdc++.h>
using namespace std;
//25CS10164
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
    int k=0;
    while(n>0){
        if(n%2==1){
            cout<<(1<<k)<<" ";
        }
        n=n/2;
        k++;
    }
    cout<<'\n';
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