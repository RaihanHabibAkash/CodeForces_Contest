#include <bits/stdc++.h>
using namespace std;

int main() {
    int cs; cin >> cs;
    while(cs--) {
        long long a, b, c; cin >> a >> b >> c;

        if(abs((a+c) - b) > abs(a - b))
            cout << abs((a+c) - b) << endl;
        else cout << abs(a - b) << endl;
    }

    return 0;
}