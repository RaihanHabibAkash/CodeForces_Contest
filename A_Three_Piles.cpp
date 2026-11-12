#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        vector<int> v(3);
        for(int i = 0; i < 3; i++) cin >> v[i];
        sort(v.begin(), v.end());

        if(v[0] + 1 == v[1] && v[2] - 1 == v[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}