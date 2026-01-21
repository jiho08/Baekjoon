#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long s = 0;

	for (int i = 0; i < n * n; ++i)
	{
		int t;
		cin >> t;
		s += t;
	}

	cout << s;
}