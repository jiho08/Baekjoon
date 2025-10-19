#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	int cnt[5] = {};

	for (const char c : s)
		switch (c)
		{
		case 'H':
			++cnt[0];
			break;
		case 'I':
			++cnt[1];
			break;
		case 'A':
			++cnt[2];
			break;
		case 'R':
			++cnt[3];
			break;
		case 'C':
			++cnt[4];
			break;
		}

	sort(cnt, cnt + 5);

	cout << cnt[0];
}