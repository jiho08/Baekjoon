#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		const int root = sqrt(n);

		cout << (root * root == n? "1\n" : "0\n");
	}
}