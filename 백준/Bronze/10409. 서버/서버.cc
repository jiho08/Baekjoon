#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, t, cnt = 0;
	cin >> n >> t;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (const int i : v)
	{
		if (t < i)
			break;

		t -= i;
		++cnt;
	}

	cout << cnt;
}