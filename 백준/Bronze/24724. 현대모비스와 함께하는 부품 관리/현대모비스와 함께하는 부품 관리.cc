#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 1; i <= t; ++i)
	{
		int n, a, b;
		cin >> n >> a >> b;

		vector<int> u(n), v(n);

		for (int j = 0; j < n; ++j)
			cin >> u[j] >> v[j];

		cout << "Material Management " << i << '\n';
		cout << "Classification ---- End!\n";
	}
}