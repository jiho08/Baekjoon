#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        int a, b, c, count = 0;
        
        if (!(cin >> a >> b >> c))
            break;

        while (true)
        {
            const int x = abs(a - b);
            const int y = abs(b - c);

            if (x == 1 && y == 1)
                break;

            if (x > y)
            {
                c = b--;
                ++count;
            }
            else
            {
                a = b++;
                ++count;
            }
        }

        cout << count << '\n';
    }
}