#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int r[3];
		cin >> r[0] >> r[1] >> r[2];
		sort(r, r + 3);

		cout << "Scenario #" << i << ":\n";
		cout << (r[0] * r[0] + r[1] * r[1] == r[2] * r[2] ? "yes\n\n" : "no\n\n");
	}
}