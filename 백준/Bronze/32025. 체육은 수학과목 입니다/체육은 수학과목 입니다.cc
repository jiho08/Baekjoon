#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	double h, w;
	cin >> h >> w;

	double m = min(h, w);

	cout << m / 2 * 100;
}