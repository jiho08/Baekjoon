#include <iostream>

using namespace std;

int sum(int t, const int n)
{
	int sum = 0;

	while (t > 0)
	{
		sum += t % n;
		t /= n;
	}

	return sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	for (int i = 2992; i <= 9999; ++i)
	{
		const int a = sum(i, 10);
		const int b = sum(i, 12);
		const int c = sum(i, 16);

		if (a == b && b == c)
			cout << i << '\n';

	}
}