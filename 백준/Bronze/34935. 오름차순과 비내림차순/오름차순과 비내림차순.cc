#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	long long n;
	cin >> n;

	bool flag = false;
	vector<long long> v(n);

	for (long long& i : v)
		cin >> i;


	for (int i = 1; i < n; ++i)
		if (v[i - 1] >= v[i])
		{
			flag = true;
			break;
		}

	cout << (flag ? 0 : 1);
}