#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n1, k1, n2, k2;
	cin >> n1 >> k1 >> n2 >> k2;

	cout << n1 * k1 + n2 * k2;
}