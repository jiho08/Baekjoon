#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void recursion(const int idx, const int k, const int bit, const int knownBit, int& maxCnt, vector<int>& wordBits)
{
	if (idx == 26)
	{
		if (k == 0)
		{
			int cnt = 0;

			for (const int wordBit : wordBits)
				if ((bit & wordBit) == wordBit)
					++cnt;

			maxCnt = max(maxCnt, cnt);
			return;
		}

		return;
	}

	const bool isLearn = knownBit & (1 << idx);

	if (!isLearn && k > 0)
		recursion(idx + 1, k - 1, bit | (1 << idx), knownBit, maxCnt, wordBits);

	recursion(idx + 1, k, bit, knownBit, maxCnt, wordBits);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k, maxCnt = 0;
	cin >> n >> k;

	vector<string> words(n);

	for (string& s : words)
		cin >> s;

	if (k < 5)
	{
		cout << 0;
		return 0;
	}

	int bit = 0;
	bit |= 1 << 'a' - 'a';
	bit |= 1 << 'n' - 'a';
	bit |= 1 << 't' - 'a';
	bit |= 1 << 'i' - 'a';
	bit |= 1 << 'c' - 'a';
	k -= 5;

	vector<int> wordBits;

	for (string& s : words)
	{
		int wordBit = 0;

		for (const char& c : s)
		{
			const int chBit = 1 << (c - 'a');

			if (!(bit & chBit))
				wordBit |= chBit;
		}

		wordBits.push_back(wordBit);
	}

	recursion(0, k, bit, bit, maxCnt, wordBits);

	cout << maxCnt;
}