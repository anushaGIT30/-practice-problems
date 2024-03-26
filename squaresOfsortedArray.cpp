#include<bits/stdc++.h>
using namespace std;

vector<int> squaresOfsortedArray(int arr[], int n){
    vector<int> ans(n);
    int start = 0;
    int end = n - 1; 
    int ptr = n - 1;
    
    while(start <= end){
        int ss = arr[start] * arr[start];
        int es = arr[end] * arr[end];
        
        if(ss > es){
            ans[ptr] = ss;
            start++;
        } else {
            ans[ptr] = es;
            end--;
        }
        ptr--;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
    vector<int> result = squaresOfsortedArray(arr, n);
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
