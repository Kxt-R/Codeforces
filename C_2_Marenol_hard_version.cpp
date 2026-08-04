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
    string a,b;
    int n;
    cin>>n;
    cin>>a>>b;
    int nodda=0,nevena=0;
    int noddb=0,nevenb=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2==0) nevena++;
            else nodda++;
        }
        if(b[i]=='1'){
            if(i%2==0) nevenb++;
            else noddb++;
        }
    }
    ll ans=0;
    if(nevena!=nevenb || nodda!=noddb){
        cout<<-1<<'\n';
        return;
    }
    int countodd=0,idxa=1,idxb=1;
    while(countodd<nodda){
        while(a[idxa]=='0'){
            idxa+=2;
        }
        while(b[idxb]=='0'){
            idxb+=2;
        }
        ans+=abs(idxa-idxb)/2;
        countodd++;
        idxa+=2;
        idxb+=2;
    }
    int counteven=0;
    idxa=0,idxb=0;
    while(counteven<nevena){
        while(a[idxa]=='0'){
            idxa+=2;
        }
        while(b[idxb]=='0'){
            idxb+=2;
        }
        ans+=abs(idxa-idxb)/2;
        counteven++;
        idxa+=2;
        idxb+=2;
    }
    cout<<ans<<'\n';
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