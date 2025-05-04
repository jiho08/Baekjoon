#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, count = 0;
	cin >> n >> m;

	map<string, int> map;
	string list;

	while (n--)
	{
		string s;
		cin >> s;

		++map[s];
	}

	while (m--)
	{
		string s;
		cin >> s;

		++map[s];
	}

	for (const auto& a : map)
		if (a.second > 1)
		{
			++count;
			list += a.first + '\n';
		}

	cout << count << '\n' << list;
}