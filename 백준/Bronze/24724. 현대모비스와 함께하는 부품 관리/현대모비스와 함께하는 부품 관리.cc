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
		int n, q;
		cin >> n >> q >> q;

		for (int j = 0; j < n; ++j)
			cin >> q >> q;

		cout << "Material Management " << i << '\n';
		cout << "Classification ---- End!\n";
	}
}