#include <iostream>

using std::string, std::cout, std::cin;

string mergeAlternately(string word1, string word2) {
    string ans = "";

    int sw1 = (int) word1.size();
    int sw2 = (int) word2.size();
    int p1 = 0, p2 = 0;

    while (p1 < sw1 && p2 < sw2) {
        ans += word1[p1];
        ans += word2[p2];
        ++p1; ++p2;
    }

    while (p1 < sw1) {
        ans += word1[p1];
        ++p1;
    }

    while (p2 < sw2) {
        ans += word2[p2];
        ++p2;
    }

    return ans;
}

int main() {
    /* SandBox */
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << mergeAlternately(s1, s2);

    return 0;
}