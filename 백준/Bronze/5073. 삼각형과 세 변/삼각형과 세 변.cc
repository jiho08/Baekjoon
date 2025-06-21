#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int r[3];
	cin >> r[0] >> r[1] >> r[2];

	while (r[0] != 0 || r[1] != 0 || r[2] != 0)
	{
		sort(r, r + 3);

		if (r[0] + r[1] <= r[2])
			cout << "Invalid\n";
		else if (r[0] == r[1] && r[1] == r[2])
			cout << "Equilateral\n";
		else if (r[0] == r[1] || r[1] == r[2])
			cout << "Isosceles\n";
		else
			cout << "Scalene\n";

		cin >> r[0] >> r[1] >> r[2];
	}
}