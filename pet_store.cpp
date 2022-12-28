#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// D. Pet Store

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    bool ok = true;
    for(auto p : mp) {
        if(p.second % 2 != 0) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve();
    }

    return 0;
}
