#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool b = false;
	int n;
	cin >> n;

	for (int i = 1; i < 10; ++i)
		if (n % i == 0 && n / i <= 9)
			b = true;

	cout << (b ? 1 : 0);
}