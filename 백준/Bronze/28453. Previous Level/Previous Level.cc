#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		int t;
		cin >> t;

		if (t == 300)
			cout << "1 ";
		else if (t >= 275)
			cout << "2 ";
		else if (t >= 250)
			cout << "3 ";
		else
			cout << "4 ";
	}
}