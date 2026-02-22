#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, a = 0, b = 0;
	cin >> n;

	vector<int> v(3);

	for (int i = 0; i < n * 3; ++i)
	{
		int t;
		cin >> t;
		++v[t - 1];
	}

	for (int i = 0; i < 3; ++i)
	{
		if (v[i] > n)
			a = i + 1;

		if (v[i] < n)
			b = i + 1;
	}

	cout << b << '\n' << a;
}