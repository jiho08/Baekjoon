#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x;
	cin >> x;

	if (x % 3 == 1)
		cout << 'U';
	else if (x % 3 == 2)
		cout << 'O';
	else
		cout << 'S';
}