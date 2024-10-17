#include <iostream>

using namespace std;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	a /= 2;

	if (n > a + b)
		cout << a + b;
	else
		cout << n;
}