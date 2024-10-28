#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	n /= 2, m /= 2;

	cout << (n > m ? m : n);
}