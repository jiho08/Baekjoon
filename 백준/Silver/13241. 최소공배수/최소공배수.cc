#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	long long r = -1, x = a * b;

	while (r != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}

	cout << x / a;
}