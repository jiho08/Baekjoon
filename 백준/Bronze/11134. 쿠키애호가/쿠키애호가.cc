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
		int n, c;
		cin >> n >> c;
		cout << (n % c > 0 ? n / c + 1 : n / c) << '\n';
	}
}