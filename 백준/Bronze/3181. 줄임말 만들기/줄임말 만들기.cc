#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string list[10] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
	string s, ans;
	cin >> s;
	ans += toupper(s[0]);

	while (cin >> s)
	{
		bool flag = false;

		for (string l : list)
		{
			if (s == l)
			{
				flag = true;
				break;
			}
		}

		if (flag)
			continue;

		ans += toupper(s[0]);
	}

	cout << ans;
}