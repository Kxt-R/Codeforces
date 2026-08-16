#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    unordered_map<int,int> m;
    for(int i=0;i<k;i++){
        m[v[i]]++;
    }
    cout<<m.size()<<'\n';
    for(int i=k;i<n;i++){
        m[v[i-k]]--;
        if(m[v[i-k]]==0) {
            m.erase(v[i-k]);
        }
        m[v[i]]++;
        cout<<m.size()<<'\n';
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