#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int m = 0;
	string ans;

	while (n--)
	{
		string s;
		int t;
		cin >> s >> t;

		if (m < t)
		{
			m = t;
			ans = s;
		}
	}

	cout << ans;
}