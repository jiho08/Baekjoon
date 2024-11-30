#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
		s[i] -= 32;

	cout << s;
}