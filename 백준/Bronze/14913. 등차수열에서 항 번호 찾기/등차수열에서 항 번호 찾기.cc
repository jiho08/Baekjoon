#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, d, k;
	cin >> a >> d >> k;

	string ans = "X";

	for (int i = 1; i <= 1000000; ++i)
		if (a + (i - 1) * d == k)
			ans = to_string(i);

	cout << ans;
}