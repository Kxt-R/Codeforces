#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
//25CS10164
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
    if(n==2){
        cout<<-1<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(i%3==1){
            cout<<i<<" ";
        }
    }
    cout<<3<<" ";
    for(int i=1;i<=n;i++){
        if(i%3==0 && i!=3){
            cout<<i<<" ";
        }
        if(i%3==2){
            cout<<i<<" ";
        }
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