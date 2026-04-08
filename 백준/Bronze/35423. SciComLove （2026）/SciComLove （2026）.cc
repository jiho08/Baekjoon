#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s, ans;
	cin >> s;

	vector<int> v(9);

	for (const char c : s)
		if (c == 'S')
			++v[0];
		else if (c == 'c')
			++v[1];
		else if (c == 'i')
			++v[2];
		else if (c == 'C')
			++v[3];
		else if (c == 'o')
			++v[4];
		else if (c == 'm')
			++v[5];
		else if (c == 'L')
			++v[6];
		else if (c == 'v')
			++v[7];
		else if (c == 'e')
			++v[8];

	int t = min({ v[0], v[1], v[2], v[3], v[4], v[5] });

	for (int i = 0; i < 6; ++i)
		v[i] -= t;

	for (int i = 0; i < t; ++i)
		ans += "SciCom";

	t = min({v[4], v[6], v[7], v[8]});

	v[4] -= t;

	for (int i = 6; i < 9; ++i)
		v[i] -= t;

	for (int i = 0; i < t; ++i)
		ans += "Love";

	cout << ans;
}