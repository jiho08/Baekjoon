#include <iostream>

using namespace std;

int asd(int k, int p, int n)
{
	return k * n + p * n * n;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int c, k, p, sum = 0;
	cin >> c >> k >> p;

	for (int i = 1; i <= c; ++i)
		sum += asd(k, p, i);

	cout << sum;
}