#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long n, f = 1;
	cin >> n;

	for (int i = 2; i <= n; ++i)
		f *= i;

	f = f / 7 / 24 / 60 / 60;
	cout << f;
}