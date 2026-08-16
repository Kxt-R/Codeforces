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
    bool primes[1001];
    fill(primes,primes+n+1,true);
    primes[0] = primes[1] = false;
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(primes[i]){
            for(int j=i*i;j<=n;j+=i){
                primes[j]=false;
            }
        }
    }
    int i=2;
    while(i<=n){
        int p1=i;
        i++;
        while(i<=n and !primes[i]){
            i++;
        }
        int p2=i;
        if(p1+p2+1 <=n and primes[p1+p2+1]) count++;
    }
    
    if(k>count) cout<<"NO";
    else cout<<"YES";
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