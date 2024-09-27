#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n = 0, m = 0, s = 0;
		cin >> n >> m;

		s = m * 2 - n;

		cout << s << ' ' << m - s << '\n';
	}
}