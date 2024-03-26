#include <bits/stdc++.h>
#include<vector>
using namespace std;

int thirdLargest(vector<int> v, int n) {
    sort(v.begin(), v.end(), greater<int>());
    int count = 1;
    int ans = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[i - 1]) {
            count++;
            ans = v[i];
        }
        if (count == 3) {
            return ans;
        }
    }
    return v[0];
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int res = thirdLargest(v, n);
    cout << "Third largest element: " << res << endl;
    return 0;
}
