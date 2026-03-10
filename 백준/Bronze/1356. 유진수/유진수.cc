#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string n;
	cin >> n;

	bool flag = false;

	for (int i = 1; i < n.size(); ++i)
	{
		int a = 1, b = 1;

		for (int j = 0; j < i; ++j)
			a *= (n[j] - '0');

		for (int j = i; j < n.size(); ++j)
			b *= (n[j] - '0');

		if (a == b)
		{
			flag = true;
			break;
		}
	}

	cout << (flag ? "YES" : "NO");
}