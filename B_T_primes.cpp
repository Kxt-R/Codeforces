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

vector<bool> primes(1000003,1);
void prime(){
    primes[0]=0,primes[1]=0;
    for(int i=2;i*i<=1000000;i++){
        if(primes[i]){
            for(int j=i*i;j<=1000000;j+=i){
                primes[j]=0;
            }
        }
    }
}

void solve() {
    int n;cin>>n;
    prime();
    for(int i=0;i<n;i++){
        long long x;cin>>x;
        double a=sqrt(x);
        if(trunc(a)==a){
            a=ll(a);
            if(a*a==x and primes[a]) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
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



