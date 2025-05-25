#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;

	cout << (n - m * k < 0 ? 0 : n - m * k) << ' ';
	cout << n - (m * k - m) - 1;
}