#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int _str, _dex, _int, _luk, n;
	cin >> _str >> _dex >> _int >> _luk >> n;

	int sum = _str + _dex + _int + _luk;

	if (sum / 4 >= n)
		cout << 0;
	else
		cout << n * 4 - sum;
}