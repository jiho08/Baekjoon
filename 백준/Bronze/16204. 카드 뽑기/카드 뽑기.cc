#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	cout << (m > k ? k : m) + (n - m > n - k ? n - k : n - m);
}