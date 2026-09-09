#include <bits/stdc++.h>
using namespace std;

#define int long long

using vi  = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using pll = pair<long long, long long>;

#define all(x)      begin(x), end(x)
#define rall(x)     rbegin(x), rend(x)
#define sz(x)       static_cast<int>((x).size())

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes(x) cout << ((x) ? "YES\n" : "NO\n")

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

const int MOD = 998244353;
const int INF = 4e18;

const int MAX=1000005;
int fac[MAX];
int invfac[MAX];

int power(int base,int exp){
    int res=1;
    while(exp>0){
        if(exp%2==1) res=(res*base)%MOD;
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
}

int modinverse(int n){
    return power(n,MOD-2);
}

void factorial(){
    fac[0]=1;
    fac[1]=1;
    
    for(int i=2;i<MAX;i++){
        fac[i]=(i*fac[i-1])%MOD;
    }
    invfac[MAX-1]=modinverse(fac[MAX-1]);
    for(int i=MAX-2;i>=0;i--){
        invfac[i]=(invfac[i+1]*(i+1))%MOD;
    }
}

int ncr(int n,int r){
    if (r<0 || r>n) return 0;
    if (r==0 || r==n) return 1;
    return ((fac[n]*invfac[r])%MOD*invfac[n-r])%MOD;
}

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int count=1;
    vi seg;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]) {
            seg.push_back(count);
            count=0;
        }
        count++;
    }
    seg.push_back(count);
    int odd=0,even=0;
    int keven=0,kodd=0;
    for(int i=0;i<seg.size();i++){
        if(i%2==0){
            even+=seg[i];
            keven++;
        }
        else{
            odd+=seg[i];
            kodd++;
        }
    }
    int ans1=ncr(even-1,keven-1);
    int ans2=(kodd>0) ? ncr(odd-1,kodd-1) : 1;

    cout<<(ans1*ans2)%MOD<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    factorial();
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}