#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s, t;
	cin >> s >> t;

	for (const auto a : t)
	{
		bool f = true;

		for (const auto o : s)
			if (a == o)
			{
				f = false;
				break;
			}

		if (f)
			cout << a;
	}
}