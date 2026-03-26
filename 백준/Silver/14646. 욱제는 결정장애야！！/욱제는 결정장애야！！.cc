#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, cnt = 0, ans = 0;
	cin >> n;

	vector<bool> v(n);
    
    n *= 2;
    
	while (n--)
	{
		int t;
		cin >> t;

		if (!v[t - 1])
		{
			v[t - 1] = true;
			++cnt;
			ans = max(ans, cnt);
		}
		else
			--cnt;
	}

	cout << ans;
}