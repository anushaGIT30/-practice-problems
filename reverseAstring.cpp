#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stack<char> st;
    
    // Push characters onto the stack
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        st.push(ch);
    }

    string ans = "";

    // Pop characters from the stack to reverse the string
    while (!st.empty()) {
        char a = st.top();
        ans.push_back(a);
        st.pop();
    }

    cout << ans << endl;
    return 0;
}