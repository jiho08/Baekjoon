#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <array>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, cnt = 1;
	cin >> a >> b;

    while (true)
    {
        if (a == b)
        {
            cout << cnt;
            break;
        }

        if (a > b)
        {
            cout << -1;
            break;
        }

        ++cnt;

        if (b % 2 == 0)
            b /= 2;
        else if (b % 10 == 1)
            b /= 10;
        else
        {
            cout << -1;
            break;
        }
    }
}