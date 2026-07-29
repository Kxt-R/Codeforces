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
    int n, m;
    cin >> n >> m;

    // limit[v] stores the minimal required left endpoint if right endpoint is v
    vector<int> limit(n + 1, 1);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        if (u > v) swap(u, v); // Ensure u < v
        // If (u, v) is bad, left endpoint 'a' must be >= u + 1
        limit[v] = max(limit[v], u + 1);
    }

    long long total_good = 0;
    int min_a = 1;

    for (int b = 1; b <= n; ++b) {
        // Propagate the left boundary constraint
        min_a = max(min_a, limit[b]);
        // Add the number of valid starting points for this right endpoint b
        total_good += (b - min_a + 1);
    }

    cout << total_good << "\n";
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