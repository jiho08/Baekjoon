#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		int n = s[i];

		int t = n;
		int p = 0;

		while (t)
		{
			p += t % 10;
			t /= 10;
		}

		for (int j = 0; j < p; ++j)
			cout << s[i];

		cout << '\n';
	}
}