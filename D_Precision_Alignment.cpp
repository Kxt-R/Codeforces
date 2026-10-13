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
    int n,k;cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        vector<int> d(3);cin>>d;
        int sum=accumulate(all(d),0);
        int cost;
        if(d[0]==d[1] and d[1]==d[2]) cost=-1;
        else if(d[2]>d[1] and d[1]>d[0]){
            if(d[2]-d[1]>d[1]-d[0]){
                cost=d[1]-d[0]+1;
            }
            else{
                cost=d[2]-d[1]+1;
            }
        }
        else cost=1;
        v.push_back({sum,cost});
    }
    sort(all(v));
    int ans=v[0].first;
    for(int i=0;i<n-1;i++){
        int cost=0;
        int idx=i;
        while(idx<n-1 and v[idx+1].first==v[idx].first){
            idx++;
        }
        for(int j=i;j<=idx;j++){
            cost+=v[j].second;
        }
        cost+=i;
        if(cost>k) break;
        ans++;
        k-=cost;
        i=idx;
        int allinc1=k/(i+1);
        if(i==n-1 or v[i].first-ans>allinc1){
            ans+=allinc1;
            break;
        }
        k-=(i+1)*(v[i+1].first-ans);
        ans=v[i+1].first;
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