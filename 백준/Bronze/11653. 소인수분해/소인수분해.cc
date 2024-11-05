#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n, q = 2;
	cin >> n;

	while (n >= 2)
		if (n % q == 0)
		{
			n /= q;
			cout << q << '\n';
		}
		else
			++q;
}