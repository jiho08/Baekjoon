#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n, m, t, ans = 0;
    cin >> n >> m >> t;

    if (t == 0)
    {
        cout << m;
        return 0;
    }

    vector<int> truth(t);
    vector<vector<int>> parties(m), partyPeople(n + 1);
    vector<bool> visitedPeople(n + 1), visitedParty(m);
    queue<int> q;

    for (int& i : truth)
        cin >> i;

    for (int i = 0; i < m; ++i)
    {
        int p;
        cin >> p;

        parties[i].resize(p);

        for (int j = 0; j < p; ++j)
        {
            cin >> parties[i][j];
            partyPeople[parties[i][j]].push_back(i);
        }
    }

    for (int p : truth)
    {
        q.push(p);
        visitedPeople[p] = true;
    }

    while (!q.empty())
    {
        const int f = q.front();
        q.pop();

        for (const int party : partyPeople[f])
        {
            if (visitedParty[party])
                continue;

            visitedParty[party] = true;

            for (int next : parties[party])
	            if (!visitedPeople[next])
	            {
                    visitedPeople[next] = true;
                    q.push(next);
	            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        bool flag = true;

        for (const int p : parties[i])
	        if (visitedPeople[p])
	        {
                flag = false;
                break;
	        }

        if (flag)
            ++ans;
    }

    cout << ans;
}