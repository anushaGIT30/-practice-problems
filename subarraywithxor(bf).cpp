#include<bits/stdc++.h>
#include<vector>
using namespace std;
int countsubarray(vector<int>&v,int n,int k){
    int count=0;
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xor1 =0;
            for(int k=i;k<=j;k++){
              xor1=xor1^v[k];
            }
            if(xor1==k){
                count=count+1;
            }
        }
     }
     return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res=countsubarray(v,n,k);
    cout<<res;
}