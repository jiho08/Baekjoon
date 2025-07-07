#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	bool b = false;

	for (int i = 0; i < n; ++i)
		if (s[i] == '?' && s[n - i - 1] == '?')
			s[i] = s[n - i - 1] = 'a';
		else if (s[i] == '?')
			s[i] = s[n - i - 1];

	cout << s;
}