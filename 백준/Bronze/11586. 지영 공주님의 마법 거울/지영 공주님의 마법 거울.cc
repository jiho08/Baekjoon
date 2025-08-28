#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n;

	vector v(n, vector<char>(n));

	for (auto& a : v)
		for (char& c : a)
			cin >> c;

	cin >> k;

	switch (k)
	{
	case 1:
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				cout << v[i][j];

			cout << '\n';
		}
		break;
	}
	case 2:
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = n - 1; j >= 0; --j)
				cout << v[i][j];

			cout << '\n';
		}
		break;
	}
	case 3:
	{
		for (int i = n - 1; i >= 0; --i)
		{
			for (int j = 0; j < n; ++j)
				cout << v[i][j];

			cout << '\n';
		}
		break;
	}
	}
}