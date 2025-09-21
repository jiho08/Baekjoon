#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    
    for (int &i : a)
        cin >> i;

    int b, c;
    cin >> b >> c;

    long long s = 0;

    for (int i : a)
    {
        s += 1;
        i -= b;

        if (i > 0)
        {
            s += (i + c - 1) / c;
        }
    }

    cout << s << '\n';
}
