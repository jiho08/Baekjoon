#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int r[3];
		cin >> r[0] >> r[1] >> r[2];

		sort(r, r + 3);

		if (r[2] >= r[0] + r[1])
			cout << "Case #" << i << ": invalid!\n";
		else if (r[0] == r[1] && r[1] == r[2])
			cout << "Case #" << i << ": equilateral\n";
		else if (r[0] == r[1] || r[1] == r[2])
			cout << "Case #" << i << ": isosceles\n";
		else
			cout << "Case #" << i << ": scalene\n";
	}
}