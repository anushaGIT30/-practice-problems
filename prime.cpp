#include<bits/stdc++.h>
using namespace std;
int main(){
	int min,max,count;
	cin>>min>>max;
	
	for(int i=min;i<=max;i++){
		count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			cout<<i<<endl;
		}
		if(i==1){
			cout<<"1"<<endl;
		}
	}
}