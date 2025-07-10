#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	if (k >= n)
	{
		cout << "YES";
		return 0;
	}

	int s = 0;

	while (k--)
	{
		int t;
		cin >> t;
		s += t % 2 == 0 ? t / 2 : t / 2 + 1;
	}

	if (s >= n)
	{
		cout << "YES";
		return 0;
	}

	cout << "NO";
}