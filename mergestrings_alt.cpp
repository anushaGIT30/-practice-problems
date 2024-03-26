#include <iostream>
#include <string>

using namespace std;

string mergeTwostrings(string w1, string w2) {
    string ans = ""; // Initialize ans as empty string
    int i = 0;
    while (i < w1.size() || i < w2.size()) {
        if (i < w1.size()) {
            ans += w1[i]; // Append character from w1
        }
        if (i < w2.size()) {
            ans += w2[i]; // Append character from w2
        }
        i++;
    }
    return ans;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    cout << "Merged string: " << mergeTwostrings(s1, s2) << endl;
    return 0;
}
