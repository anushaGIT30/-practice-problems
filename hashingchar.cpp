#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++; // Using characters directly as indices
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl; // Using characters directly as indices
    }
    return 0;
}
