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

int countDigits(int num) {
    if (num == 0) return 1; // Explicitly handle zero
    
    int count = 0;
    // Use long long to safely handle INT_MIN without overflow bugs
    long long n = num; 
    if (n < 0) n = -n; 

    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int countzeros(int num) {
    
    int count = 0;
    long long n = num; 
    while (n > 0 && n%10==0) {
        n /= 10;
        count++;
    }
    return count;
}

void solve() {
    int n,t;
    cin>>n>>t;
    vector<int> zeros;
    int td=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        td+=countDigits(a);
        int z=countzeros(a);
        if(z>0) zeros.push_back(z);
    }
    sort(zeros.begin(),zeros.end(),greater <> ());
    for(int i=0;i<zeros.size();i=i+2){
        td-=zeros[i];
    }
    if(td>t) cout<<"Sasha"<<"\n";
    else cout<<"Anna"<<"\n";

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