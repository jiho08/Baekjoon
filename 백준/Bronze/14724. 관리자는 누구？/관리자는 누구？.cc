#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m = 0, idx;
	cin >> n;

	vector v(9, vector<int>(n));

	for (auto& a : v)
		for (int& i : a)
			cin >> i;

	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < n; ++j)
			if (v[i][j] > m)
			{
				m = v[i][j];
				idx = i;
			}

	switch (idx)
	{
	case 0:
		cout << "PROBRAIN";
		break;
	case 1:
		cout << "GROW";
		break;
	case 2:
		cout << "ARGOS";
		break;
	case 3:
		cout << "ADMIN";
		break;
	case 4:
		cout << "ANT";
		break;
	case 5:
		cout << "MOTION";
		break;
	case 6:
		cout << "SPG";
		break;
	case 7:
		cout << "COMON";
		break;
	case 8:
		cout << "ALMIGHTY";
		break;
	}
}