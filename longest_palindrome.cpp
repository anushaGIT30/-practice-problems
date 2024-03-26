#include<bits/stdc++.h>
#include<vector>
using namespace std;

int longestPalindrome(string s) {
    vector<int> upper(26, 0);
    vector<int> lower(26, 0);
    int count = 0;
    bool odd = false;

    for (int i=0;i<s.size();i++) {
        if (s[i]>='a') {
            lower[s[i]- 'a']++;
        } else  {
            upper[s[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (upper[i] % 2 == 0) {
            count += upper[i];
        } else {
            count += upper[i] - 1;
            odd = true;
        }

        if (lower[i] % 2 == 0) {
            count += lower[i];
        } else {
            count += lower[i] - 1;
            odd = true;
        }
    }

    return count + odd;
}

int main() {
    string s;
    getline(cin, s);
    cout << longestPalindrome(s);

    return 0;
}

