#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, n;
	cin >> a >> b >> n;

	a = a % b;

	while (--n)
		a = a * 10 % b;

	cout << a * 10 / b;
}