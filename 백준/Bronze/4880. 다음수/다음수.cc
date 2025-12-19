#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	while (a != 0 || b != 0 || c != 0)
	{
		if (c - b == b - a)
			cout << "AP " << c + b - a << '\n';
		else
			cout << "GP " << c * (b / a) << '\n';

		cin >> a >> b >> c;
	}
}