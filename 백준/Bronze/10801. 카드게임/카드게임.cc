#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int aCount = 0, bCount = 0;
	int aCard[10] = {};
	int bCard[10] = {};

	for (int i = 0; i < 10; ++i)
		cin >> aCard[i];

	for (int i = 0; i < 10; ++i)
		cin >> bCard[i];

	for (int i = 0; i < 10; ++i)
	{
		if (aCard[i] == bCard[i])
			continue;

		if (aCard[i] > bCard[i])
			++aCount;
		else if (aCard[i] < bCard[i])
			++bCount;
	}

	if (aCount == bCount)
		cout << 'D';
	else if (aCount > bCount)
		cout << 'A';
	else
		cout << 'B';
}