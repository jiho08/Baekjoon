#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int l, x = 0, y = 0;
	string s;
	cin >> l >> s;

	set<pair<int, int>> st;
    st.insert({ x, y });

	for (const char c : s)
	{
		switch (c)
		{
		case 'E':
			--x;
			break;
		case 'W':
			++x;
			break;
		case 'S':
			--y;
			break;
		case 'N':
			++y;
			break;
		}

		st.insert({ x, y });
	}

	cout << st.size();
}