#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, score = 1, sum = 0;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (const int& i : v)
		if (i == 0)
			score = 1;
		else
			sum += score++;

	cout << sum;
}