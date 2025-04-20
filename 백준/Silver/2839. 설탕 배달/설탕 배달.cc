#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    bool b = false;
    int n, s = 0;
    cin >> n;

    const int t = n;

    s += n / 5;
    n %= 5;

    while (n <= t)
    {
        if (n % 3 == 0)
        {
            s += n / 3;
            b = true;
            break;
        }

        --s;
        n += 5;
    }

    cout << (b ? s : -1);
}