#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> freq(26, -1);

        for(int i = 0, j = n-1; i < j; i++, j--) {
            if(s[i] != s[j]) {
                int mn  = min(s[i] - 'a', s[j] - 'a'),
                mx = max(s[i] - 'a', s[j] - 'a');

                freq[mx] = max(freq[mx], abs(mx - mn));
                freq[mn] = max(freq[mn], 0);
            }
        }

        int cnt = 0;
        vector<bool> is_okey(26, false);
        for(int i = 25; i >= 0; i--) {
            if(freq[i] != -1) {
                for(int j = i; j > i-freq[i]; j--)
                    if(!is_okey[j]) {
                        cnt++;
                        is_okey[j] = true;
                    }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}