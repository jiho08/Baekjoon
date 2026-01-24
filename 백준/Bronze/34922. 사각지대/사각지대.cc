#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int w, h, r;
	cin >> w >> h >> r;

	const double d = 3.14 * r * r / 4;
	cout << w * h - d;
}