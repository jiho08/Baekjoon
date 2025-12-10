#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	if (n % m == 0)
		cout << n / m;
	else
		cout << n / m + 1;
}