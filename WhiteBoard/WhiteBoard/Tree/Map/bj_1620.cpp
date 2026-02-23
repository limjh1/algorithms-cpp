// link: https://www.acmicpc.net/problem/1620
// date: 2025-11-14
// idea: map, o(n log N)

#include <iostream>
#include <map>

using namespace std;

int n, m;
string s;
map<string, int> mp;
map<int, string> mp2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> s;
		mp[s] = i;
		mp2[i] = s;
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> s;
		if (int a = atoi(s.c_str()))
		{
			cout << mp2[a] << '\n';
		}
		else
		{
			cout << mp[s] << '\n';
		}
	}

	return 0;
}