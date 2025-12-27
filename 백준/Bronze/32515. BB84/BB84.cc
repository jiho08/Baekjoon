#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	string a, x, b, y, ans;
	cin >> n >> a >> x >> b >> y;

	bool flag = false;

	for (int i = 0; i < n; ++i)
		if (a[i] == b[i])
		{
			if (x[i] != y[i])
			{
				flag = true;
				break;
			}

			ans += x[i];
		}

	if (flag)
		cout << "htg!";
	else
		cout << ans;
}