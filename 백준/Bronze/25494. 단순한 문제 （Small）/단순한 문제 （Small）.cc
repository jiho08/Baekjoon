#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x, y, z;
		cin >> x >> y >> z;

		int min = x > y ? (y > z ? z : y) : (x > z ? z : x);

		cout << min << '\n';
	}
}