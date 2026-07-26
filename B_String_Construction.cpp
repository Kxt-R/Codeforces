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
    int n,a;
    cin>>n>>a;
    int zero=(n+1)/2;
    int one=n/2;
    int totaladj=zero+one-2;
    if(a>totaladj){
        cout<<-1<<'\n';
        return;
    }
    int nalt=n-a-1;
    string s="";
    for(int i=0;i<nalt-1;i++){
        if(i%2==0) {
            s.append("0");
            zero--;
        }
        else {
            s.append("1");
            one--;
        }
    }
    if(s[s.size()-1]=='1'){
        for(int i=0;i<zero;i++) s.append("0");
        for(int i=0;i<one;i++) s.append("1");
    }
    else{
        for(int i=0;i<one;i++) s.append("1");
        for(int i=0;i<zero;i++) s.append("0");
    }
    cout<<s<<'\n';
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