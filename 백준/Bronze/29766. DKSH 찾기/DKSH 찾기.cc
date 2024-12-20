#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s, a = "DKSH";

	int cnt = 0;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		int flag = 0;

		for (int j = 0; j < 4; ++j)
			if (s[i + j] != a[j])
			{
				flag = 1;
				break;
			}

		if (!flag)
			++cnt;
	}

	cout << cnt;
}