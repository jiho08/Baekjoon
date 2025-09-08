#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    const vector maxScore = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
    int sum = 0;

    for (int i = 0; i < 9; ++i)
    {
        int n;
        cin >> n;
        sum += n;

        if (n > maxScore[i])
        {
            cout << "hacker";
            return 0;
        }
    }

    cout << (sum >= 100 ? "draw" : "none");
}