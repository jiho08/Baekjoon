#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	bool flag = false;

	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
			--k;

		if (k == 0)
		{
			cout << i;
			flag = true;
			break;
		}
	}

	if (!flag)
		cout << 0;
}