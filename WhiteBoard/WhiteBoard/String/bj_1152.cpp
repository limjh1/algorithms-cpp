// link: https://www.acmicpc.net/problem/1152
// date: 2025-12-10
// idea: string

#include <iostream>
#include <string>

using namespace std;

string s;
int cnt;
bool inWord = false;

/* 공백만 카운트하게되면, 맨 앞, 뒤에 공백이 나온다면 대응이 안된다. */
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin, s);

	for (auto c : s)
	{
		if (c != ' ')
		{
			if (false == inWord)
			{
				++cnt;
				inWord = true;
			}
		}
		else
		{
			inWord = false;
		}
	}

	cout << cnt;

	return 0;
}