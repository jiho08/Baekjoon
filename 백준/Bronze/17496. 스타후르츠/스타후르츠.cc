#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, t, c, p;
	cin >> n >> t >> c >> p;
	cout << --n / t * c * p;
}