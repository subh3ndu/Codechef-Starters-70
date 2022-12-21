#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// D. Prime Reversal

void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    
    int cnt_a = 0, cnt_b = 0;
    for(auto c : a) {
        if(c == '1')
            cnt_a++;
    }

    for(auto c : b) {
        if(c == '1')
            cnt_b++;
    }

    if(cnt_a == cnt_b) 
        cout << "YES\n";
    else 
        cout << "NO\n";


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
