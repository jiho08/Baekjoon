#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(5);
	bool flag = false;

	while (n--)
	{
		int t;
		cin >> t;
		++v[t - 1];
	}

	for (const int i : v)
		if (i == 0)
		{
			flag = true;
			break;
		}

	cout << (flag ? "YES" : "NO");
}