#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long n;
	cin >> n;

	if (n >= -32768 && n <= 32767)
		cout << "short";
	else if (n >= -2147483648 && n <= 2147483647)
		cout << "int";
	else
		cout << "long long";
}