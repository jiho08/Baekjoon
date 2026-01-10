#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string n;
	int b, ans = 0, t = 1;
	cin >> n >> b;

	for (int i = n.size() - 1; i >= 0; --i)
	{
		if (n[i] >= '0' && n[i] <= '9')
			ans += (n[i] - '0') * t;
		else
			ans += (n[i] - 55) * t;

		t *= b;
	}

	cout << ans;
}