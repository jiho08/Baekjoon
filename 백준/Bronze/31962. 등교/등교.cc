#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x, a = 0, b = -1;
	cin >> n >> x;

	vector<int> r(n), q(n);

	for (int i = 0; i < n; ++i)
	{
		int s, t;
		cin >> s >> t;
		r[i] = s + t;
		q[i] = s;
	}

	for (int i = 0; i < n; ++i)
		if (r[i] <= x && r[i] > a)
		{
			a = r[i];
			b = i;
		}

	if (b != -1)
		cout << q[b];
	else
		cout << b;
}