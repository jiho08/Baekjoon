#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	if (n < 5)
	{
		cout << 4;
		return 0;
	}

	int m = 2147483647;
	
	for (int i = 1; i * i <= n; ++i)
	{
		const int j = (n + i - 1) / i;
		m = min(m, 2 * (i + j - 2));
	}

	cout << m;
}