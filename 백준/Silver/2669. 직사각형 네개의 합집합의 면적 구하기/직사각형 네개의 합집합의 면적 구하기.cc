#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool plane[100][100] = {};
	int count = 0;

	for (int t = 0; t < 4; ++t)
	{
		int lx, ly, rx, ry;
		cin >> lx >> ly >> rx >> ry;

		for (int i = lx; i < rx; ++i)
			for (int j = ly; j < ry; ++j)
				plane[i][j] = true;
	}

	for (auto& i : plane)
		for (const bool j : i)
			if (j)
				++count;

	cout << count;
}