#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int s = a * (100 - b) / 100;

	cout << (s > 99 ? 0 : 1);
}