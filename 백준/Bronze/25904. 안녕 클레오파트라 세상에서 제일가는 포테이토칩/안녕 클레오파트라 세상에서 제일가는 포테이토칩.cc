#include <iostream>
using namespace std;

int main()
{
	int n, x, a = 0;
	cin >> n >> x;
	int t[100] = {};

	for (int i = 0; i < n; ++i)
		cin >> t[i];

	while (true)
	{
		if (t[a] < x)
			break;

		++a;
		a %= n;

		++x;
	}

	cout << a + 1;
}