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
	
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		++v[t - 1];
	}

	for (int i = 1; i <= n; ++i)
		if (v[i - 1] > 1)
		{
			cout << i;
			break;
		}
}