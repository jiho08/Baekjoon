#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, sum = 0;
	string s;
	cin >> n >> s;

	int itemCount[n];
	string item[n];

	for (int i = 0; i < n; ++i)
		cin >> item[i] >> itemCount[i];

	for (int i = 0; i < n; ++i)
		if (item[i].find(s) != string::npos)
		{
			char underBar = '_';
			istringstream iss(item[i]);
			string split;

			while (getline(iss, split, underBar))
				if (split == s)
				{
					sum += itemCount[i];
					break;
				}
		}

	cout << sum;
}