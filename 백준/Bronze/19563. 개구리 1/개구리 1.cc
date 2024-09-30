#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int s = abs(a) + abs(b);

	if (s <= c && ((c % 2 == 0 && s % 2 == 0) || (c % 2 == 1 && s % 2 == 1)))
		cout << "YES";
	else
		cout << "NO";
}