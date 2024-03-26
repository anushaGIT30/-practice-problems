#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
     if(arr[i]==arr[j]){
    count=count+1;
    return true;
}
        }
        
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   if(containsDuplicate(arr,n)){
    cout<<"true"<<endl;
   } 
   else
   cout<<"false"<<endl;
}