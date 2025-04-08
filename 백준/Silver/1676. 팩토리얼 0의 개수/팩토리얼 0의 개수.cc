#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, i = 1, s = 0;
	cin >> n;

	while (n / pow(5, i) != 0)
	{
		s += n / pow(5, i);
		++i;
	}

	cout << s;
}