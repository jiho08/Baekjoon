#include <iostream>
#include <set>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, count = 1;
        cin >> n >> m;

        queue<int> q;
        multiset<int> s;

        while (n--)
        {
            int temp;
            cin >> temp;

            q.push(temp);
            s.insert(temp);
        }

        while (!q.empty())
        {
            int front = q.front();
            q.pop();

            if (front < *s.rbegin())
            {
                q.push(front);
                m = (m == 0 ? q.size() : m) - 1;
                continue;
            }

            if (m == 0)
            {
                cout << count << '\n';
                break;
            }

            --m;
            ++count;
            s.erase(s.find(front));
        }
    }
}