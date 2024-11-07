#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n, d = 0, p = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		char s;
		cin >> s;

		s == 'D' ? ++d : ++p;

		if (abs(d - p) > 1)
			break;
	}

	cout << d << ':' << p;
}