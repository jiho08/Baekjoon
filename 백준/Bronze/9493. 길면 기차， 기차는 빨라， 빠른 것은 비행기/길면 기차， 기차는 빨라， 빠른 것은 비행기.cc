#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    double m, a, b;

    while (true)
    {
        cin >> m >> a >> b;

        if (m == 0 && a == 0 && b == 0)
            break;

        double d = (m / a - m / b) * 3600.0;

        int sec = (int)round(d);

        int h = sec / 3600;
        int m = (sec % 3600) / 60;
        int s = sec % 60;

        printf("%d:%02d:%02d\n", h, m, s);
    }
}