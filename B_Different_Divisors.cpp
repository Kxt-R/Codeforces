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

vector<bool> pri(30005,1);
vi primes;

void sol(){
    pri[0]=false,pri[1]=false;
    for(int i=2;i*i<=30000;i++){
        if(pri[i]){
            for(int j=i*i;j<=30000;j+=i){
                pri[j]=false;
            }
        }
    }
    for(int i=2;i<=30000;i++){
        if(pri[i]) primes.push_back(i);
    }
}

void solve() {
    int n;cin>>n;
    auto p1=*lower_bound(primes.begin(),primes.end(),n+1);
    auto p2=*lower_bound(primes.begin(),primes.end(),p1+n);

    cout<<(1LL)*p1*p2<<'\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}