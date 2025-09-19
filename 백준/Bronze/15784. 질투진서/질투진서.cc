#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, a, b;
	cin >> n >> a >> b;

	vector v(n, vector<int>(n));
	bool isAngry = false;

	for (auto& t : v)
		for (int& i : t)
			cin >> i;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (i != a - 1 && j != b - 1)
				continue;

			if (v[i][j] > v[a - 1][b - 1])
			{
				isAngry = true;
				break;
			}
		}

	cout << (isAngry ? "ANGRY" : "HAPPY");
}