#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string n;
	cin >> n;

	int cnt[4] = {};

	for (const char c : n)
	{
		if (c == '2')
			++cnt[0];
		else if (c == '0')
			++cnt[1];
		else if (c == '1')
			++cnt[2];
		else if (c == '8')
			++cnt[3];
		else
		{
			cout << 0;
			return 0;
		}
	}

	if (cnt[0] == cnt[1] && cnt[1] == cnt[2] && cnt[2] == cnt[3])
		cout << 8;
	else if (cnt[0] && cnt[1] && cnt[2] && cnt[3])
		cout << 2;
	else
		cout << 1;
}