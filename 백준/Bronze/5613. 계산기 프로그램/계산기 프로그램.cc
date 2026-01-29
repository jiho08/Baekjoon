#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	char c;
	cin >> n >> c;

	while (c != '=')
	{
		int m;
		cin >> m;

		if (c == '+')
			n += m;
		else if (c == '-')
			n -= m;
		else if (c == '*')
			n *= m;
		else
			n /= m;

		cin >> c;
	}

    cout << n;
}