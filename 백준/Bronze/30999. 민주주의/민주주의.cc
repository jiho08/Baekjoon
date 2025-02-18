#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, a = 0;
	cin >> n >> m;

	while (n--)
	{
		int o = 0;
		string s;
		cin >> s;

		for (int i = 0; i < m; ++i)
			if (s[i] == 'O')
				++o;

		if (o > m / 2)
			++a;
	}

	cout << a;
}