#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n0, num = 1;
	cin >> n0;

	while (n0 != 0)
	{
		const int n1 = 3 * n0;
		const int n2 = (n1 % 2 == 0 ? n1 : n1 + 1) / 2;
		const int n3 = 3 * n2;
		const int n4 = n3 / 9;

		cout << num << ". " << (n1 % 2 == 0 ? "even " : "odd ") << n4 << '\n';

		++num;
		cin >> n0;
	}
}