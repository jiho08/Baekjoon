#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, s = INT32_MAX;
    cin >> n >> m;

    vector<string> v(n);

    for (string& s : v)
        cin >> s;

    for (int i = 0; i < n - 7; ++i)
        for (int j = 0; j < m - 7; ++j)
        {
            int d = 0, c = 0;

            for (int k = 0; k < 8; ++k)
                for (int l = 0; l < 8; ++l)
                {
                    if ((k + l) % 2 == 0)
                    {
                        if (v[i + k][j + l] != 'B')
                            ++d;
                    }
                    else if (v[i + k][j + l] != 'W')
                        ++d;
                }

            c = min(d, 64 - d);
            s = min(s, c);
        }

    cout << s;
}