#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, sum = 0;
    cin >> k;

    stack<int> stack;

    while (k--)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            sum -= stack.top();
            stack.pop();
        }
        else
        {
            stack.push(num);
            sum += num;
        }
    }

    cout << sum;
}