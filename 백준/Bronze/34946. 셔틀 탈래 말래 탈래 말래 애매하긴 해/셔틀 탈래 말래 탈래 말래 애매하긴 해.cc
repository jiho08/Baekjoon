#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	bool canShuttle = true, canWalk = true;

	if (a + b > d)
		canShuttle = false;

	if (c > d)
		canWalk = false;

	if (canShuttle && canWalk)
		cout << "~.~";
	else if (canShuttle)
		cout << "Shuttle";
	else if (canWalk)
		cout << "Walk";
	else
		cout << "T.T";
}