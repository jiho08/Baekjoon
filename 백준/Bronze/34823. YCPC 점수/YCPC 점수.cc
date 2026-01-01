#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int y, c, p;
	cin >> y >> c >> p;

	if (c / 2 <= y && c / 2 <= p)
		cout << c / 2;
	else
		cout << min(y, p);
}