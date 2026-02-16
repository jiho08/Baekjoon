#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 1; i <= n; ++i)
    {
        int k;
        cin >> k;
        v.insert(v.begin() + (v.size() - k), i);
    }

    for (const int i : v)
        cout << i << ' ';
}