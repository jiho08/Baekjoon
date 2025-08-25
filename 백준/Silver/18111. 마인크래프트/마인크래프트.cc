#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, b;
	cin >> n >> m >> b;

	vector ground(n, vector<int>(m));
	vector<int> cnt(257);
	int time = 2147483647, height = -1, minHeight = 257, maxHeight = -1;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			int t;
			cin >> t;
			ground[i][j] = t;

			++cnt[t];
			minHeight = min(minHeight, t);
			maxHeight = max(maxHeight, t);
		}

	for (int i = minHeight; i <= maxHeight; ++i)
	{
		int curBlock = b;
		int curTime = 0;

		for (int j = minHeight; j <= maxHeight; ++j)
		{
			if (cnt[j] == 0)
				continue;

			if (i < j)
			{
				const int diff = j - i;
				curBlock += diff * cnt[j];
				curTime += diff * cnt[j] * 2;
			}
			else if (i > j)
			{
				const int diff = i - j;
				curBlock -= diff * cnt[j];
				curTime += diff * cnt[j];
			}
		}

		if (curBlock < 0)
			continue;

		if (curTime < time || (curTime == time && i > height))
		{
			time = curTime;
			height = i;
		}
	}

	cout << time << ' ' << height;
}