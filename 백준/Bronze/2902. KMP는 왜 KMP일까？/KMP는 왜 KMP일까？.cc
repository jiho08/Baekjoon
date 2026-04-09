#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
    
    string s;
    cin >> s;

    for (char c : s)
        if ('A' <= c && c <= 'Z')
            cout << c;
}