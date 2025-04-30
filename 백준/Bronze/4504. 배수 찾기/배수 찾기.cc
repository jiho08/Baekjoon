#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, num;
	cin >> n >> num;

	while (num != 0)
	{
		cout << num << (num % n == 0 ?
			" is a multiple of " : " is NOT a multiple of ") << n << ".\n";

		cin >> num;
	}
}