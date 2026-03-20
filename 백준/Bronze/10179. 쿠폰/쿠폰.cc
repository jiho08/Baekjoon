#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	cout << fixed;
	cout.precision(2);

	while (t--)
	{
		double p;
		cin >> p;
		cout << '$' << p * 0.8 << '\n';
	}
}