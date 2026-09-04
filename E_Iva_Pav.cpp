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

int prefix[200005][18];


bool query(int l,int r,int k){
    int p=31-__builtin_clz(r-l+1);
    int rlt=prefix[l-1][p]&prefix[r-(1<<p)][p];
    if(rlt>=k) return true;
    else return false;
}

void solve() {
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<n;i++) prefix[i][0]=v[i];
    for(int k=1;k<18;k++){
        for(int i=0;i<n-(1<<k)+1;i++){
            prefix[i][k]=prefix[i][k-1]&prefix[i+(1<<(k-1))][k-1];
        }
    }

    int q;
    cin>>q;
    while(q--){
        int l,k;
        cin>>l>>k;
        int ans=-1;
        int high=n,low=l;
        while(high>low){
            int mid=low + (high-low+1)/2;
            if(query(l,mid,k)){
                low=mid;
            }
            else high=mid-1;
        }
        if(query(l,low,k))cout<<low<<" ";
        else cout<<-1<<' ';
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