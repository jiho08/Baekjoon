#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	cout << ((b - a) > (c - b) ? b - a - 1 : c - b - 1);
}