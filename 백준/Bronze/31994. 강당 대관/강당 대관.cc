#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string answer;
	int max = 0;

	for (int i = 0; i < 7 ; ++i)
	{
		string s;
		int n;
		cin >> s >> n;

		if (n > max)
		{
			max = n;
			answer = s;
		}
	}

	cout << answer;
}