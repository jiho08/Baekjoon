#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int r[4];
	cin >> r[0] >> r[1] >> r[2] >> r[3];

	sort(r, r + 4);

	cout << r[0] * r[2];
}