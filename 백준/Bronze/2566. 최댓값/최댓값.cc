#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> v(9, vector<int>(9));
	int m = 0;
	int im = 1, jm = 1;

	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < 9; ++j)
			cin >> v[i][j];

	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < 9; ++j)
			if (v[i][j] > m)
			{
				m = v[i][j];
				im = i + 1;
				jm = j + 1;
			}

	cout << m << '\n' << im << ' ' << jm;
}