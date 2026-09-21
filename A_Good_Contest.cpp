#include <bits/stdc++.h>
using namespace std;

int main() {
    int cs; cin >> cs;
    while(cs--) {
        int arr[3];
        int students, mn = 0; cin >> students;

        for(int i = 0; i < 3; i++) {
            cin >> arr[i];
            mn = max(mn, students - arr[i]);
        }

        cout << mn << endl;
    }

    return 0;
}