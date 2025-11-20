#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	const char c = s[0];

	while (--n)
	{
		cin >> s;

		if (s[0] != c)
		{
			cout << 0;
			return 0;
		}
	}

	cout << 1;
}