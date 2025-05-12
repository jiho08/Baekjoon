#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string x, y;
	int t, n;
	cin >> t;

	while (t--)
	{
		cin >> n;

		int s = 1;
		unordered_map<string, int> m;

		while (n--)
		{
			cin >> x >> y;
			++m[y];
		}

		for (const auto& a : m)
			s *= a.second + 1;

		cout << s - 1 << '\n';
	}
}