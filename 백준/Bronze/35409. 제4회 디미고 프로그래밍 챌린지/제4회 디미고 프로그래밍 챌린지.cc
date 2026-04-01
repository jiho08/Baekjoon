#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int h, m;
	cin >> h >> m;

	const int t = h * 60 + m;

	vector<pair<int, int>> v =
	{
		{6 * 60 + 30, 9 * 60},
		{9 * 60 + 50, 10 * 60},
		{10 * 60 + 50, 11 * 60},
		{11 * 60 + 50, 12 * 60},
		{12 * 60 + 50, 13 * 60 + 50},
		{14 * 60 + 40, 14 * 60 + 50},
		{15 * 60 + 40, 15 * 60 + 50},
		{16 * 60 + 40, 22 * 60 + 50}
	};

	for (auto& [s, e] : v)
		if (s <= t && t <= e)
		{
			cout << "Yes";
			return 0;
		}

	cout << "No";
}