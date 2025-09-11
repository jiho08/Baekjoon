#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, a, b;
	cin >> n >> m >> a >> b;

	const int sum = (n * 3 - m) * a + b;
	cout << (sum - b > 0 ? sum : 0);
}