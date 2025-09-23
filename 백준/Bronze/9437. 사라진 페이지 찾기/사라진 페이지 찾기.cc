#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, p;
	cin >> n;

	while (n != 0)
	{
		cin >> p;
		vector<int> v;

		int q = n + 1 - p;
		v.push_back(q);

		if (q % 2 == 0)
		{
			v.push_back(q - 1);
			v.push_back(n - q + 2);
		}
		else
		{
			v.push_back(q + 1);
			v.push_back(n - q);
		}

		sort(v.begin(), v.end());

		for (const int i : v)
			cout << i << ' ';

		cout << '\n';

		cin >> n;
	}
}