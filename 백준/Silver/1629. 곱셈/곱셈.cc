#include <iostream>

using namespace std;

int pow(const int a, const int b, const int c)
{
	if (b == 0)
		return 1;

	long long t = pow(a, b / 2, c);
	t = t * t % c;

	if (b % 2 == 1)
		return t * a % c;

	return t;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	cout << pow(a, b, c);
}