#include<bits/stdc++.h>
#include<string>
#include<unordered_map>
using namespace std;
bool isIsomorphic(string s,string t){
    unordered_map<char,char>m,n;
    for(int i=0;i<s.length();i++){
        if(m[s[i]]&&m[s[i]]!=t[i]){
            return false;
        }
        if(n[t[i]&&n[t[i]]!=s[i]])
        return false;
        m[s[i]]=
        t[s[i]]=t
    }
}
int main()