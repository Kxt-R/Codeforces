#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

void solve() {
    int n;
    cin>>n;
    vi v;
    for(int i=0;i<n;i++) cin>>v[i];
    if(n==1) cout<<"NO"<<'\n'; return;
    int mx=0,mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(i%2==0){
            mx=max(mx,v[i]);
        }
        else mn=max(mn,v[i]);
    }
    if(mx-mn>=1) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

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