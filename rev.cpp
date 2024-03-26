#include <iostream>
#include <algorithm> // Include the algorithm header for the reverse function
using namespace std;

int main() {
    string s;
  
    getline(cin, s);
   // reverse(s.begin(), s.end()); // Reverse the string
   int l=0;
   int r=s.length()-1;
   
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
  
    if(s[l]==s[r]){
cout<<"is palindrome"<<endl;
    }
    else
    cout<<"not a palindrome"<<endl;
    return 0;
}
