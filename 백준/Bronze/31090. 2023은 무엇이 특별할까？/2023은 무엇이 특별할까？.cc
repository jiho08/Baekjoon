#include <iostream>

#include <queue>

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

		cout << ((n + 1) % (n % 100) == 0 ? "Good\n" : "Bye\n");
	}
}