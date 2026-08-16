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
    int n;cin>>n;
    vi v(n); for(int i=0;i<n;i++)cin>>v[i];
    int count=0;
    if(n==1){
        cout<<count<<'\n';
        return;
    }
    for(int i=n-2;i>=0;i--){
        while(v[i]>=v[i+1]){
            if(v[i]==0 && v[i+1]==0){
                cout<<-1<<'\n';
                return;
            }
            v[i]/=2;
            count++;
        }
    }
    cout<<count<<'\n';
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