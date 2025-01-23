#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x, a = -1;
	cin >> n >> x;

	for (int i = 0; i < n; ++i)
	{
		int s, t;
		cin >> s >> t;

		if (s + t <= x && s > a)
			a = s;
	}

	cout << a;
}