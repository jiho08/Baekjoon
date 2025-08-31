#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int sc = 0, tc = 0;
    for (char c : s) {
        if (c == 's') sc++;
        else tc++;
    }

    for (int i = 0; i < n; i++) {
        if (sc == tc) {
            cout << s.substr(i) << "\n";
            return 0;
        }
        if (s[i] == 's') sc--;
        else tc--;
    }
}