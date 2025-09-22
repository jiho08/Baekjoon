#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	string vowels = "aiyeou";
	string consonants = "bkxznhdcwgpvjqtsrlmf";

	while (getline(cin, s))
	{
		for (const char c : s)
		{
			if (!isalpha(static_cast<unsigned char>(c)))
			{
				cout << c;
				continue;
			}

			const bool isUpper = isupper(static_cast<unsigned char>(c));
			const char lc = tolower(static_cast<unsigned char>(c));

			const size_t vc = vowels.find(lc);

			if (vc != string::npos)
			{
				char ch = vowels[(vc + 3) % 6];

				if (isUpper)
					ch = toupper(ch);

				cout << ch;
				continue;
			}

			const size_t cc = consonants.find(lc);

			if (cc != string::npos)
			{
				char ch = consonants[(cc + 10) % 20];

				if (isUpper)
					ch = toupper(ch);

				cout << ch;
			}
		}

		cout << '\n';
	}
}