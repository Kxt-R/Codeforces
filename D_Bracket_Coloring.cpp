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

void solve() {
    int n;cin>>n;
    vector<char> v(n);for(int i=0;i<n;i++) cin>>v[i];
    vector<int> ans(n,-1);
    stack<pair<char,int>> s;
    for(int i=0;i<n;i++){
        if(s.empty() or v[i]=='(') s.push({v[i],i});
        else{
            pair<char,int> p=s.top();
            if(p.first=='('){
                ans[p.second]=1;
                ans[i]=1;
                s.pop();
            }
            else s.push({v[i],i});
        }
    }
    if(s.empty()){
        cout<<1<<'\n';
        for(int i=0;i<n;i++) cout<<ans[i]<<' ';
        cout<<'\n';
        return;
    }
    bool flag=1;
    int count=0;

    for(int i=n-1;i>=0;--i){
        if(v[i]=='(') count++;
        else{
            if(count==0){
                flag=0;
                break;
            }
            count--;
        }
    }
    if(flag and count==0){
        cout<<1<<'\n';
        for(int i=0;i<n;i++) cout<<1<<' ';
        cout<<'\n';
        return;
    }
    flag=1,count=0;
    for(int i=n-1;i>=0;i--){
        if(ans[i]==-1){
            ans[i]=2;
            if(v[i]=='(') count++;
            else{
                if(count==0){
                    flag=0;
                    break;
                }
                count--;
            }
        }
    }
    if(count!=0) flag=0;
    if(!flag){
        cout<<-1<<'\n';
        return;
    }
    cout<<2<<'\n';
    for(int i=0;i<n;i++) cout<<ans[i]<<' ';
    cout<<'\n';
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