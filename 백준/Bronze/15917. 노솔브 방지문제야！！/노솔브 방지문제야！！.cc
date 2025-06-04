#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int q;
	cin >> q;

	while (q--)
	{
		int a;
		cin >> a;
		cout << ((a & -a) == a ? "1\n" : "0\n");
	}
}