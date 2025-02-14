#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a = 0;
    char s;
    cin >> n;

    vector<char> r(n);

    for (int i = 0; i < n; ++i)
        cin >> r[i];

    cin >> s;

    for (const char c : r)
	    if (s == c)
            ++a;

    cout << a;
}