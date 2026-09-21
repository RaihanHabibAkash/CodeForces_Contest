#include <bits/stdc++.h>
using namespace std;

int main() {
    // int cs; cin >> cs;
    // while(cs--) 

    int n; cin >> n;
    long long arr[n];
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    long long avg = sum / n;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < avg) {
            arr[i]++;
            cnt++;
        }
        if(arr[i] > avg && arr[i] - cnt == avg) {
            arr[i] -= cnt;
            if(i > 0) {
            cout << i << " " << i-1 << endl;
            swap(arr[i], arr[i-1]);
            cout << i-1 << " " << cnt-i << endl;
            swap(arr[i-1], arr[cnt-i]);
            }
            cnt = 0;
            i--;
        }
    }

    cnt = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] == avg)
            cnt++;

    // cout << cnt << endl;
    
    return 0;
}
