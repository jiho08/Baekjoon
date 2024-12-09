#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x, y, w, h, a, b;
	cin >> x >> y >> w >> h;

	a = w / 2 >= x ? x : w - x;

	b = h / 2 >= y ? y : h - y;

	cout << (a > b ? b : a);
}