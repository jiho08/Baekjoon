#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 1; i <= t; ++i)
	{
		int n;
		cin >> n;

		if (n > 4500)
			cout << "Case #" << i << ": Round 1\n";
		else if (n > 1000)
			cout << "Case #" << i << ": Round 2\n";
		else if (n > 25)
			cout << "Case #" << i << ": Round 3\n";
		else
			cout << "Case #" << i << ": World Finals\n";
	}
}