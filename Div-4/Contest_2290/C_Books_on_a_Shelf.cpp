#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        ll n; cin >> n;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(n < 2) {
            cout << n << endl;
            cout << arr[0] << endl;
            continue;
        }
        sort(arr.begin(), arr.end());

        vector<ll> left, helper;
        for(int i = 0; i < n; i++) {
            if(left.empty() || left.back() != arr[i]) left.push_back(arr[i]);
            else helper.push_back(arr[i]);
        }
        
        vector<ll> right, mid;
        for(int i = 0; i < helper.size(); i++) {
            if(right.empty() || right.back() != helper[i]) right.push_back(helper[i]);
            else mid.push_back(helper[i]);
        }

        reverse(right.begin(), right.end());
        mid.insert(mid.end(), right.begin(), right.end());
        left.insert(left.end(), mid.begin(), mid.end());

        ll l = 1;
        for(int i = 1; i < left.size(); i++) {
            if(left[i] > left[i-1]) l++;
            else break;
        }

        ll r = 1;
        for(int i = left.size()-1; i > 0; i--) {
            if(left[i] < left[i-1]) r++;
            else break;
        }

        cout << min(n, l+r) << endl;
        for(int i = 0; i < left.size(); i++) cout << left[i] << " ";
        cout << endl;
    }

    return 0;
}