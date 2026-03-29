#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;

	while (cin >> n)
	{
		vector<bool> b(n);
		vector<int> v(n);

		bool flag = true;

		for (int& i : v)
			cin >> i;

		for (int i = 0; i < n - 1; ++i)
			b[abs(v[i] - v[i + 1])] = true;

		for (int i = 1; i < n; ++i)
			if (!b[i])
			{
				flag = false;
				break;
			}

		cout << (flag ? "Jolly\n" : "Not jolly\n");
	}
}