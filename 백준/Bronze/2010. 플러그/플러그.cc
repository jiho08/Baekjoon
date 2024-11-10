#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int plug;
		cin >> plug;

		sum += plug;
	}

	cout << sum - n + 1;
}