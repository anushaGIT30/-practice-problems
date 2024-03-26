#include<bits/stdc++.h>

#include<vector>
using namespace std;
vector<int>TwoSum(vector<int>arr,int n,int target){
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                 ans.push_back(i);
                 ans.push_back(j);
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>res(2);
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    res=TwoSum(arr,n,target);
    for(int i=0;i<2;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
