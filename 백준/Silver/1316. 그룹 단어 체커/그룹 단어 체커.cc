#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, count = 0;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;

		if (s.size() < 3)
		{
			++count;
			continue;
		}

		unordered_map<char, int> map;
		bool b = true;

		for (int i = 0; i < s.size(); ++i)
		{
			if (map[s[i]] > 0 && s[i - 1] != s[i])
			{
				b = false;
				break;
			}

			if (map[s[i]] == 0)
				++map[s[i]];
		}

		if (b)
			++count;
	}

	cout << count;
}