#include <iostream>
#include <algorithm>
#include <cmath>
#include <list>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, y = 0, m = 0;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (const int i : v)
	{
		y += i / 30 + 1;
		m += i / 60 + 1;
	}

	if (y * 10 == m * 15)
		cout << "Y M " << y * 10;
	else if (y * 10 > m * 15)
		cout << "M " << m * 15;
	else
		cout << "Y " << y * 10;
}