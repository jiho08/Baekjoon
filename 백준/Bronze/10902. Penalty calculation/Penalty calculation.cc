#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    int n;
    cin >> n;

    int sf = -1, tf = 0, f = 0;

    for (int i = 1; i <= n; ++i)
    {
        int t, s;
        cin >> t >> s;

        if (s > sf)
        {
            sf = s;
            tf = t;
            f = i;
        }
        else if (s == sf && t < tf)
        {
            tf = t;
            f = i;
        }
    }

    if (sf == 0)
        cout << 0;
    else if (sf == 1 || sf == 4)
        cout << tf + (f - 1) * 20;
}