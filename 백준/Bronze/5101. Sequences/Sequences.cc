#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while (true)
	{
        int firstNum, diff, findNum;
        cin >> firstNum >> diff >> findNum;

        if (firstNum == 0 && diff == 0 && findNum == 0)
            break;

        int diffValue = findNum - firstNum;

        if (diffValue % diff == 0 && diffValue / diff >= 0)
            cout << diffValue / diff + 1 << '\n';
        else
            cout << "X\n";
	}
}