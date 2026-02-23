// link: https://www.acmicpc.net/problem/2675
// date: 2025-12-10
// idea: string

#include <iostream>

using namespace std;

int n, m;
string s;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	while (n--)
	{
		cin >> m >> s;
		for (int i = 0; i < s.size(); ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << s[i];
			}
		}
		cout << '\n';
	}	

	return 0;
}