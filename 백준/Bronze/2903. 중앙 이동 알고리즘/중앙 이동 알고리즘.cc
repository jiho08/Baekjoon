#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, a = 4;
	cin >> n;

	for (int i = 0; i < n; ++i)
		a = (a - sqrt(a)) * 4 + 1;

	cout << a;
}