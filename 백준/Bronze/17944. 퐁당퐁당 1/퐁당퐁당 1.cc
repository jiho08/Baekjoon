#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, t;
	cin >> n >> t;

	int a = 1, d = 1;

	while (--t)
	{
		a += d;
		d = a == 1 || a == 2 * n ? -d : d;
	}

	cout << a;
}