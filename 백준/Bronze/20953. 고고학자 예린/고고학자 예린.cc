#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int a, b;
		cin >> a >> b;

		int s = 0;

		for (int j = 0; j < a + b; ++j)
			s += j;

		s *= a + b;

		cout << s << '\n';
	}
}