#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<vector<int>> graph(n, vector<int>(n));

	for (auto& v : graph)
		for (int& i : v)
			cin >> i;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < n; ++k)
				if (graph[j][i] && graph[i][k])
					graph[j][k] = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << graph[i][j] << ' ';

		cout << '\n';
	}
}