#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        vector<char> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        vector<char> helper(n);
        helper[0] = arr[0];

        for(int i = 1; i < n; i++) {
            if(arr[i-1] == 'R') helper[i] = 'B';
            if(arr[i-1] == 'B') helper[i] = 'R';
        }

        int cnt = 0;
        if(arr[0] == 'B') cnt++;

        for(int i = 1; i < n; i++)
            if(arr[i] != helper[i])
                cnt++;
        
        cout << cnt << endl;
    }

    return 0;
}