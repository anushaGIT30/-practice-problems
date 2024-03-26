#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxsum=arr[0];
    int currmax=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i])
            currmax+=arr[i];
        else {
            maxsum=max(currmax,maxsum);
            currmax=arr[i];
        }
    }
    maxsum=max(currmax,maxsum);
    cout<<maxsum;
}
