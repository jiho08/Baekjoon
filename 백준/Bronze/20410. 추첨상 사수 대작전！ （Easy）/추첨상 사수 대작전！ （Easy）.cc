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

    int m, s, x, y;
    cin >> m >> s >> x >> y;

    for (int a = 0; a < m; ++a)
    {
        for (int c = 0; c < m; ++c)
        {
            int calcX1 = (a * s + c) % m;
            if (calcX1 != x) continue;

            int calcX2 = (a * x + c) % m;
            if (calcX2 == y) {
                cout << a << " " << c;
                return 0;
            }
        }
    }
}
