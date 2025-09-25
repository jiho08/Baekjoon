#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
		if (to_string(i).find('3') != string::npos
			|| to_string(i).find('6') != string::npos
			|| to_string(i).find('9') != string::npos)
		{

			++cnt;

			if (i == 33 || i == 36 || i == 39)
				++cnt;
		}

	cout << cnt;
}