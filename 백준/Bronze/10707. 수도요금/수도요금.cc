#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, c, d, p;
	cin >> a >> b >> c >> d >> p;

	const int x = p * a;
	const int y = p > c ? b + (p - c) * d : b;

	cout << (x > y ? y : x);
}