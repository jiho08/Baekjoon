#include <iostream>

using namespace std;

int recursion(const int n, const int r, const int c)
{
	if (n == 0)
		return 0;

	const int half = 1 << (n - 1);
	const int area = half * half;

	if (r < half && c < half)
		return recursion(n - 1, r, c);
	if (r < half && c >= half)
		return area + recursion(n - 1, r, c - half);
	if (r >= half && c < half)
		return 2 * area + recursion(n - 1, r - half, c);
	return 3 * area + recursion(n - 1, r - half, c - half);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, r, c;
	cin >> n >> r >> c;
	cout << recursion(n, r, c);
}