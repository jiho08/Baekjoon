#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int times[3];

    for (int& time : times)
        cin >> time;

    for (const int t : times)
    {
	    int cnt = 0;

        const int m1 = t % (a + b);

        if (m1 > 0 && m1 <= a)
            ++cnt;

        const int m2 = t % (c + d);

        if (m2 > 0 && m2 <= c)
            ++cnt;

        cout << cnt << '\n';
    }
}