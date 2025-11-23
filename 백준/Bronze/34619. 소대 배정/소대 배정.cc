#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, n, k;
	cin >> a >> b >> n >> k;

	const int t = (k - 1) / n;
	cout << t / b + 1 << ' ' << t % b + 1;
}