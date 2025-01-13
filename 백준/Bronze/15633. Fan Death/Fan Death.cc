#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
		if (n % i == 0)
			s += i;

	cout << s * 5 - 24;
}