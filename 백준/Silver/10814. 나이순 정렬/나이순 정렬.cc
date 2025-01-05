#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string arr[200];
	string b, output;
	int a, n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		arr[a - 1] += to_string(a) + ' ' + b + '\n';
	}

	for (const auto& i : arr)
		output += i;

	cout << output;
}