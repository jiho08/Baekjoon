#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	for (int i = 0; i < 3; ++i)
	{
		const char c[5] = { 'E', 'A', 'B', 'C', 'D' };
		int ans = 0;

		for (int j = 0; j < 4; ++j)
		{
			int n;
			cin >> n;

			if (n == 0)
				++ans;
		}

		cout << c[ans] << '\n';
	}
}