// link: https://www.acmicpc.net/problem/7785
// date: 2025-11-14
// idea: map, o(n log N)

#include <iostream>
#include <map>

using namespace std;

int n;
string s, check;
map<string, bool> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s >> check;
		bool bRes = (check == "enter") ? true : false;
		mp[s] = bRes;
	}

	for (auto it = mp.rbegin(); it != mp.rend(); ++it)
	{
		if (false == it->second)
			continue;

		cout << it->first << '\n';
	}

	return 0;
}