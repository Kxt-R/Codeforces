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
struct Element {
    int l, r, u, v;
};

void solve() {
    int n;
    cin >> n;
    vector<Element> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r >> a[i].u >> a[i].v;
    }

    // Check if a valid subsequence of length m exists
    auto can = [&](int m) -> bool {
        int pos = 1; // current target left rank (1 to m)
        for (int i = 0; i < n; i++) {
            if (pos > m) break;

            int lrank = pos;
            int rrank = m - pos + 1;

            bool left_ok  = (lrank < a[i].l || lrank > a[i].r);
            bool right_ok = (rrank < a[i].u || rrank > a[i].v);

            if (left_ok && right_ok) {
                pos++;
            }
        }
        return pos > m;
    };

    // Try all possible lengths from largest to smallest
    for (int m = n; m >= 1; m--) {
        if (can(m)) {
            cout << m << '\n';
            return;
        }
    }

    cout << 0 << '\n';
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