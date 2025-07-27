#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	string st;

	for (const char c : s)
	{
		st += c;

		const auto size = st.size();

		if (size >= 4 && st.substr(size - 4) == "PPAP")
			st.erase(size - 3, 3);
	}

	cout << (st == "P" ? "PPAP" : "NP");
}