#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	char arr[4] = {'N', 'E', 'S', 'W'};
	int n = 0;

	for (int i = 0; i < 10; ++i)
	{
		int t;
		cin >> t;

		if (t == 3)
			n -= 1;
		else
			n += t;
	}

	cout << arr[(n % 4 + 4) % 4];
}