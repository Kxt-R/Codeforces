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
    string s;cin>>s;
    int n=s.size();

    for(int i=0;i<n;i++){
        int num=(s[i]-'0');
        if(num%8==0){
            cout<<"YES\n"<<num<<'\n';
            return;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int num=(((s[i]-'0')*10)+(s[j]-'0'));
            if(num%8==0){
                cout<<"YES\n"<<num<<'\n';
                return;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int num=((s[i]-'0')*100)+((s[j]-'0')*10)+(s[k]-'0');
                if(num%8==0){
                    cout<<"YES\n"<<num<<'\n';
                    return;
                }
            }
        }
    }

    cout<<"NO\n";
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