#include<bits/stdc++.h>
#include<utility>
using namespace std;
pair<int,int>getMinMax(long long arr[],int n){
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       mini = min(mini, static_cast<int>(arr[i]));
        maxi = max(maxi, static_cast<int>(arr[i]));
    }
   return make_pair(mini, maxi);

}
int main() {
    long long arr[] = {10, 20, 15, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    pair<int, int> result = getMinMax(arr, n);
    
    cout << "Minimum element: " << result.first << endl;
    cout << "Maximum element: " << result.second << endl;
    
    return 0;

}