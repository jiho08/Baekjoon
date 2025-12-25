#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	float f, prev;
	cin >> prev >> f;

	cout << fixed;
	cout.precision(2);

	while (f != 999.f)
	{
		cout << f - prev << '\n';
		prev = f;
		cin >> f;
	}
}