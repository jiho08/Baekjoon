#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n, m, v;
    cin >> n >> m >> v;

    vector<int> vec(n);

    for (int& i : vec)
        cin >> i;

    const int cycle = v - 1;

    while (m--)
    {
        long long t;
        cin >> t;

        if (t < n)
            cout << vec[t] << '\n';
        else
            cout << vec[(t - cycle) % (n - cycle) + cycle] << '\n';
    }
}