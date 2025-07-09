#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		string k;
		cin >> k;
		cout << (static_cast<int>(k[k.size() - 1]) % 2 == 0 ? "even\n" : "odd\n");
	}
}