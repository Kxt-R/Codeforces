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
    vector<int> small(26,0);
    vector<int> capital(26,0);
    string s;cin>>s;
    for(auto c:s){
        if(isupper(c)){
            capital[c-'A']++;
        }
        else{
            small[c-'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(capital[i]>0){
            cout<<(char)('A'+i)<<' '<<capital[i]<<'\n';
        }
    }

    for(int i=0;i<26;i++){
        if(small[i]>0){
            cout<<(char)('a'+i)<<' '<<small[i]<<'\n';
        }
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