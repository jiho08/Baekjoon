#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int cnt = 1, sum = 0;

	for (int i = 1; i < s.size(); ++i)
		if (s[i] == s[i - 1] + 1)
			++cnt;
		else
		{
			if (cnt == 3)
				++sum;

			cnt = 1;
		}

	if (cnt == 3)
		++sum;

	cout << sum;
}