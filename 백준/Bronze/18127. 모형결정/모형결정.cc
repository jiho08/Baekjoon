#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long a, b;
	cin >> a >> b;
	cout << (2 + b * (a - 2)) * (b + 1) / 2;
}