#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++) {
        bool flag = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
