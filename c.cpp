#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C. Cost of Groceries

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);

    for(auto &y : a) cin >> y;
    for(auto &y : b) cin >> y;

    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= x) 
            ans += b[i];
    }
    cout << ans << "\n";

    return ;
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
