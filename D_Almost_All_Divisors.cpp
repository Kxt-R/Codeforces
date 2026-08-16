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
    vi v(n); for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll number=1LL*v[n-1]*v[0];
    ll x=number,nd=1;
    for(ll j=2;j*j<=x;j++){
        int count=0;
        while(x%j==0){
            count++;
            x/=j;
        }
        nd*=(count+1);
    }
    if(x!=1) nd*=(2);
    if((nd-2)!=n){
        cout<<-1<<'\n';
        return;
    }
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            cout<<-1<<'\n';
            return;
        }
        if(number%v[i]!=0){
            cout<<-1<<'\n';
            return;
        }
    }
    cout<<number<<'\n';
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