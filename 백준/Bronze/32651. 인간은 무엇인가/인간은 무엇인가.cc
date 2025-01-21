#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	bool b = false;

	if (n % 2024 == 0 && n <= 100000)
		b = true;

	cout << (b ? "Yes" : "No");
}