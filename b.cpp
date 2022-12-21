#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Spice Level

void solve() {
    int n;
    cin >> n;

    if(n < 4) 
        cout << "MILD\n";
    else if(n >= 4 and n < 7)
        cout << "MEDIUM\n";
    else 
        cout << "HOT\n";

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
