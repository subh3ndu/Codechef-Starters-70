#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// F. Frequency Array Retrival

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for(auto &x : b)
        cin >> x;

    map<int, int> cnt;
    for(auto x : b) {
        cnt[x]++;
    }

    for(auto p : cnt) {
        if(p.second >= p.first) 
            continue;
        else {
            cout << "-1\n";
            return ;
        }
    }
    
    map<int, int> mp;
    int temp = 1;
    for(int i = 0; i < n; i++) {
        if(mp.find(b[i]) != mp.end())
            continue;
        else {
            mp[b[i]] = temp++;
        }
    }

    for(auto x : b) {
        cout << mp[x] << " ";
    }
    cout << "\n";

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
