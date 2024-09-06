#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
	int n, s = 1;
	cin >> n;

	if (n == 0 || n == 1)
		cout << 1;
	else
	{
		for (int i = 1; i <= n; ++i)
			s *= i;

		cout << s;
	}

	return 0;
}