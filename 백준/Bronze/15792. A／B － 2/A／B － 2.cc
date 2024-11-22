#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	cout << a / b << '.';

	a %= b;

	for (int i = 0; i < 2000; ++i)
	{
		a *= 10;
		cout << a / b;
		a %= b;
	}
}