#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		int x, sum = 0;
		cin >> x;

		for (int i = 0; i < x * 2 + 1; ++i)
		{
			char c;
			cin >> c;

			if (i % 2 == 1)
				continue;

			sum += c != '!' ? c - '0' : 10;
		}

		if (sum > 9)
			cout << "!\n";
		else
			cout << sum << '\n';
	}
}