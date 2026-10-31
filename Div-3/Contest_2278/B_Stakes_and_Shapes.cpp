// https://codeforces.com/contests/2278
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int x,y,z; cin >> x >> y >> z;

        char val;
        if(x >= y && x >= z) val = 'P';
        else if(y >= x && y >= z) val = 'R';
        else val = 'S';

        int sum = x + y + z;
        
        for(int i = 0; i < sum; i++)
            cout << val;
        cout << endl;
    }

    return 0;
}