#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, count = 0;
	cin >> n;

	bool paper[100][100] = {false};

	while (n--)
	{
		int x, y;
		cin >> x >> y;

		for (int i = x; i < x + 10; ++i)
			for (int j = y; j < y + 10; ++j)
				paper[i][j] = true;
	}

	for (const auto& i : paper)
		for (const bool j : i)
			if (j)
				++count;

	cout << count;
}