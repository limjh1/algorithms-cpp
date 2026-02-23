// link: https://www.acmicpc.net/problem/9086
// date: 2025-12-10
// idea: string

#include <iostream>

using namespace std;

int t;
string s; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	while (t--)
	{
		cin >> s;
		cout << s[0] << s[s.size() - 1];
	}

	return 0;
}