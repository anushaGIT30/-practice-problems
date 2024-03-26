#include<iostream>
#include<climits>
using namespace std;

bool increasingTripletSubsequence(int arr[], int n) {
    int first = INT_MAX;
    int second = INT_MAX;
    int third = INT_MAX;
    for (int i = 0; i < n; i++) {
        int ele = arr[i];
        if (first >= ele) {
            first = ele;
        } else if (second > ele) {
            second = ele;
        } else {
            third = ele;
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (increasingTripletSubsequence(arr, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
