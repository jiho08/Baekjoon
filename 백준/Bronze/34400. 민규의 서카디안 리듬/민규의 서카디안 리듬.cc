#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		const int d = n % 25;
		cout << (d >= 17 ? "OFFLINE\n" : "ONLINE\n");
	}
}