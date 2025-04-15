#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    bool flag = false;
    int n, x = 1, y = 1;
    cin >> n;

    for (int i = 1; i < n; ++i)
        if (!flag)
            if (y == 1)
            {
                ++x;
                flag = !flag;
            }
            else
            {
                --y;
                ++x;
            }
        else
            if (x == 1)
            {
                ++y;
                flag = !flag;
            }
            else
            {
                --x;
                ++y;
            }

    cout << y << '/' << x;
}