#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	for (int i = 0; i < n; ++i)
		switch (s[i])
		{
			case 'i':
			case 'l':
				s[i] = toupper(s[i]);
			break;

			case 'I':
			case 'L':
				s[i] = tolower(s[i]);
			break;
		}

	cout << s;
}