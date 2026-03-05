#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, s = 0;
	cin >> n;

	vector v(500, vector<bool>(500));

	while (n--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = y1; i < y2; ++i)
			for (int j = x1; j < x2; ++j)
				v[i][j] = true;
	}

	for (auto a : v)
		for (bool b : a)
			if (b)
				++s;

	cout << s;
}