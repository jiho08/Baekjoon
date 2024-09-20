#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (b >= a)
		cout << a + a - 1;
	else
		cout << b + b + 1;

	return 0;
}