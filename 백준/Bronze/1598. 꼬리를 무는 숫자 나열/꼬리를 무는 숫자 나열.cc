#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	const int ax = --a / 4, ay = a % 4, bx = --b / 4, by = b % 4;
	cout << abs(ax - bx) + abs(ay - by);
}