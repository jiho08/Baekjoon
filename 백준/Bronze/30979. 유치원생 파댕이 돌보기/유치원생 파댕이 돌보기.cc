#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t, n, s = 0;
	cin >> t >> n;

	for (int i = 0; i < n; ++i)
	{
		int q;
		cin >> q;
		s += q;
	}

	cout << (s < t ? "Padaeng_i Cry" : "Padaeng_i Happy");
}