#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tsum=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int res=tsum-sum;
    cout<<res;
}