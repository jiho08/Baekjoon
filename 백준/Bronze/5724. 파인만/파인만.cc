#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	while (n != 0)
	{
		int s = 0;

		for (int i = 1; i <= n; ++i)
			s += i * i;

		cout << s << '\n';
		cin >> n;
	}
}