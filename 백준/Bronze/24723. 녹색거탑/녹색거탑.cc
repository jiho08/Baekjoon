#include <iostream>
using namespace std;

int main()
{
	int n, s = 1;
	cin >> n;

	for (int i = 0; i < n; ++i)
		s *= 2;
	cout << s;
}