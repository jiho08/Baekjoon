#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a[10], b[10];
	int x = 0, y = 0;
	char winner = 'D';

	for (int& i : a)
		cin >> i;

	for (int& i : b)
		cin >> i;

	for (int i = 0; i < 10; ++i)
		if (a[i] > b[i])
		{
			x += 3;
			winner = 'A';
		}
		else if (a[i] < b[i])
		{
			y += 3;
			winner = 'B';
		}
		else
		{
			++x;
			++y;
		}

	if (x > y)
		winner = 'A';
	else if (x < y)
		winner = 'B';

	cout << x << ' ' << y << '\n' << winner;
}