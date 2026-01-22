#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m = 5000;

	while (cin >> n)
		if (n == 1)
			m -= 500;
		else if (n == 2)
			m -= 800;
		else
			m -= 1000;

	cout << m;
}