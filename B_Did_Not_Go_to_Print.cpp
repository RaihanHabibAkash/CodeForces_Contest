#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;

        stack<int> st;
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            char c; cin >> c;
            if(c == '2') {
                if(!st.empty()) {
                    st.pop();
                    ans.push_back(i);
                }
            }
            else if(c == '1') {
                st.push(i);
            }
        }

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(int x : ans) cout << x << " ";
        cout << endl;
    }

    

    return 0;
}