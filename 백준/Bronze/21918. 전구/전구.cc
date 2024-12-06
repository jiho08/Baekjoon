#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
    int s[n];

	for (int i = 0; i < n; ++i)
		cin >> s[i];

	for (int i = 0; i < m; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;

		switch (a)
		{
		case 1:
			s[b - 1] = c;
			break;

		case 2:
			for (int i = b - 1; i < c; ++i)
				s[i] = s[i] == 0 ? 1 : 0;
			break;

		case 3:
			for (int i = b - 1; i < c; ++i)
				s[i] = 0;
			break;

		case 4:
			for (int i = b - 1; i < c; ++i)
				s[i] = 1;
			break;
		}
	}

	for (int i = 0; i < n; ++i)
		cout << s[i] << ' ';
}