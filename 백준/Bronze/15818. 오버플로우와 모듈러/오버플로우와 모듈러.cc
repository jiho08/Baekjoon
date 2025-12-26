#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);

	long long sum = 1;

	for (int& i : v)
		cin >> i;

	for (const int i : v)
	{
		sum *= i % m;
		sum %= m;
	}

	cout << sum % m;
}