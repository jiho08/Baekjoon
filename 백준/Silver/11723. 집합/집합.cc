#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m;
    vector<bool> r(21, false);
    cin >> m;

    while (m--)
    {
        string s;
        int n;
        cin >> s;

        if (s == "add")
        {
            cin >> n;
            r[n] = true;
        }
        else if (s == "remove")
        {
            cin >> n;
            r[n] = false;
        }
        else if (s == "check")
        {
            cin >> n;
            cout << (r[n] ? 1 : 0) << '\n';
        }
        else if (s == "toggle")
        {
            cin >> n;
            r[n] = !r[n];
        }
        else if (s == "all")
            for (int i = 0; i < 21; ++i)
                r[i] = true;
        else if (s == "empty")
            for (int i = 0; i < 21; ++i)
                r[i] = false;
    }
}