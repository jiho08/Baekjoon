#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 1, a = 0;
	cin >> n;

	vector<int> r(n);

	for (int i = 0; i < n; ++i)
		cin >> r[i];

	for (int i = 0; i < n; ++i)
	{
		if (r[i] != s)
			++a;

		++s;
	}

	cout << a;
}