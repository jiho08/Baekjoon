#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int cnt = 0;

	for (int i = 0; i <= n; ++i)
		for (int j = i; j <= n; ++j)
			cnt += i + j;

	cout << cnt;
}