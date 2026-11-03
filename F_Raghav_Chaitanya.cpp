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

const int MOD = 1e9 + 7;
const int INF = 4e18;

int power(int base, int exp, int mod = MOD) {
    base %= mod;
    int res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

template <typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

template <typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
    for (int i = 0; i < sz(v); ++i) {
        out << v[i] << (i + 1 == sz(v) ? "" : " ");
    }
    return out;
}

template <typename T> struct OneBasedInput { vector<T>& v; };
template <typename T> struct OneBasedOutput { const vector<T>& v; };

template <typename T> OneBasedInput<T> in1(vector<T>& v) { return {v}; }
template <typename T> OneBasedOutput<T> out1(const vector<T>& v) { return {v}; }

template <typename T>
istream& operator>>(istream& in, OneBasedInput<T> ob) {
    for (int i = 1; i < sz(ob.v); ++i) in >> ob.v[i];
    return in;
}

template <typename T>
ostream& operator<<(ostream& out, OneBasedOutput<T> ob) {
    for (int i = 1; i < sz(ob.v); ++i) {
        out << ob.v[i] << (i + 1 == sz(ob.v) ? "" : " ");
    }
    return out;
}

void solve() {
    int n,q;cin>>n>>q;
    vi v(n+2,0);
    vector<pii> qur;
    for(int i=0;i<q;++i){
        int x,y;cin>>x>>y;
        qur.push_back({x,y});
        v[x]++;v[y+1]--;
    }
    for(int i=1;i<=n;++i){
        v[i]+=v[i-1];
    }
    for(int i=1;i<=n;++i) v[i]%=2;
    for(int i=2;i<=n;++i){
        v[i]+=v[i-1];
    }
    v[0]=0;
    int total1=v[n];
    int ans=-1;
    for(int i=0;i<q;++i){
        int x=qur[i].first;
        int y=qur[i].second;
        int len=y-x+1;
        int n1=v[y]-v[x-1];
        ans=max(ans,total1+len-(2*n1));
    }
    cout<<ans<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}