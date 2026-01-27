#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		int r, e, c;
		cin >> r >> e >> c;

		if (r > e - c)
			cout << "do not advertise\n";
		else if (r < e - c)
			cout << "advertise\n";
		else
			cout << "does not matter\n";
	}
}