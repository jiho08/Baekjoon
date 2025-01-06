#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a_num;
		cin >> a_num;

		vector<int> a_picture(a_num);

		for (int j = 0; j < a_num; ++j)
			cin >> a_picture[j];

		int b_num;
		cin >> b_num;

		vector<int> b_picture(b_num);

		for (int j = 0; j < b_num; ++j)
			cin >> b_picture[j];

		bool is_draw = false;

		for (int j = 4; j > 0; --j)
		{
			int a_count = count(a_picture.begin(), a_picture.end(), j);
			int b_count = count(b_picture.begin(), b_picture.end(), j);

			if (a_count != b_count)
			{
				cout << (a_count > b_count ? 'A' : 'B') << '\n';
				break;
			}

			if (j == 1)
				is_draw = true;
		}

		if (is_draw)
			cout << 'D' << '\n';
	}
}