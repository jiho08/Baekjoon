#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string A, string B)
{
	int c = 0;
	int l = A.size();

	for (int i = 0; i < l; ++i)
	{
		if (A == B)
			return c;

		char t = A[A.size() - 1];
		A.erase(A.size() - 1);
		A = t + A;
		++c;
	}

	return -1;
}