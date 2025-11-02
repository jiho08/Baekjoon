#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		long long a, b, c;
		cin >> a >> b >> c;

		long long aa = (a * a) + (b + c) * (b + c);
		long long bb = (b * b) + (a + c) * (a + c);
		long long cc = (c * c) + (a + b) * (a + b);

		cout << min({aa, bb, cc}) << '\n';
	}
}