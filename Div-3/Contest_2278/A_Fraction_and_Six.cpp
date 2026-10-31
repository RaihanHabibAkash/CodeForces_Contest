// https://codeforces.com/contests/2278
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, m; cin >> n >> m;
        string s1, s2; cin >> s1 >> s2;
        int freq1[26] = {0}, freq2[26] = {0};

        for(int i = 0; i < s1.size(); i++)
            freq1[s1[i] - 'a']++;

        for(int i = 0; i < s2.size(); i++)
            freq2[s2[i] - 'a']++;

        for(int i = 0; i < 26; i++) {
            freq1[i] -= freq2[i];
            freq2[i] = 0;
        }

        bool flag = true;
        if(freq1[18] != 1 || freq1[8] != 1 || freq1[23] != 1) flag = false;
        
        for(int i = 0; i < 26; i++) {
            if(i == 18 || i == 8 || i == 23) continue;

            if(freq1[i] != 0 || freq2[i] != 0) flag = false;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}