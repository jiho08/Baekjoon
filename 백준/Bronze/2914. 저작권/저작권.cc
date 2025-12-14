#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, i;
	cin >> a >> i;
	cout << a * (i - 1) + 1;
}