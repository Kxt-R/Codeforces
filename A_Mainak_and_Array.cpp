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
    int n;cin>>n;
    vi v(n);cin>>v;
    if(n==1){
        cout<<"0\n";
        return;
    }
    int ans=-INF;
    ans=max(ans,v[n-1]-v[0]);
    for(int i=0;i<n-1;++i) ans=max(ans,v[i]-v[i+1]);
    int mn=*min_element(v.begin()+1,v.end());
    int mx=*max_element(v.begin(),v.end()-1);
    ans=max(ans,mx-v[0]);
    ans=max(ans,v[n-1]-mn);
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