#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		double a, b;
		cin >> a >> b;

		double height = (2.0 * a) / b;

		cout << fixed;
		cout.precision(2);
		cout << "The height of the triangle is " << height << " units\n";
	}
}