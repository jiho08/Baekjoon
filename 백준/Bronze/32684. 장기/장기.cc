#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int r[6] {26, 14, 10, 6, 6, 4};
	int x = 0, y = 3;

	for (const int i : r)
	{
		int a;
		cin >> a;
		x += a * i;
	}

	for (const int i : r)
	{
		int b;
		cin >> b;
		y += b * i;
	}

	cout << (x > y ? "cocjr0208" : "ekwoo");
}