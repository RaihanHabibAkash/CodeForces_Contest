// Topic: Finding an invariant (Need to learn)
// Not Submited in Contest
// Get helped by chatgpt but still why unique value is need did not understood (set use)
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        set<ll> s;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            s.insert(x - i);
        }

        ll prev; int cnt = 0, mx = 0;
        bool flag = true;
        for(auto x : s) {
            if(flag || x != prev + 1) {
                cnt = 1;
                flag = false;
            }
            else cnt++; // 4 + 1 == 4 (prev+1 == current)
            
            mx = max(mx, cnt);
            prev = x;
        }

        cout << mx << endl;
    }
    
    return 0;
}
