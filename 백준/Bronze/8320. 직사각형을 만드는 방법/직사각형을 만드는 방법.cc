#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = i; j < n / i + 1; ++j)
			++s;

	cout << s;
}