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
    string s;cin>>s;

    vector<vector<char>> v={{'1','1','0','0'},{'1','0','0','1'},{'0','0','1','1'},{'0','1','1','0'}};
    bool correct;
    ll count=0;

    for(int i=0;i<4;i++){
        correct=true;
        for(int j=0;j<n;j++){
            if(s[j]!='?' and s[j]!=v[i][j%4]){
                correct=false;
                break;
            }
        }
        if(correct) count++;
        count%=(998244353);
    }

    cout<<count%(998244353)<<'\n';
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