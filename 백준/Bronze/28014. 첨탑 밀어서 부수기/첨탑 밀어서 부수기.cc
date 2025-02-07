#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0;
	cin >> n;

	vector<int> r(n);

	for (int i = 0; i < n; ++i)
		cin >> r[i];

	for (int i = 0; i < n; ++i)
	{
		while (i < n - 1 && r[i] > r[i + 1])
			++i;

		++s;
	}

	cout << s;
}