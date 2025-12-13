#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	if (a % 2 == 0 && b % 2 == 1)
		cout << (b - a) / 2 + 2;
	else
		cout << (b - a) / 2 + 1;
}