#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int upperbound(vector<int>& arr, int x, int n) {
    auto it = upper_bound(arr.begin(), arr.end(), x);
    return it - arr.begin();
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = upperbound(arr, x, n);
    cout << ans << endl;
    return 0;
}
