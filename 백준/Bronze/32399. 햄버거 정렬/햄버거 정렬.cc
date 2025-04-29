#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	if (s == "(1)")
		cout << 0;
	else if (s[1] != '1')
		cout << 1;
	else
		cout << 2;
}