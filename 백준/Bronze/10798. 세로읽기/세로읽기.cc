#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> v(5);

	for (int i = 0; i < 5; ++i)
		getline(cin, v[i]);

	for (int i = 0; i < 15; ++i)
		for (int j = 0; j < 5; ++j)
		{
			if (v[j].size() <= i)
				continue;

			cout << v[j][i];
		}
}