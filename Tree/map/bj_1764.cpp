// link: https://www.acmicpc.net/problem/1764
// date: 2025-11-18
// idea: map, sort, vector o(n log N)

#pragma region 중복 고려 X
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<string> v;
map<string, int> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n + m; ++i)
	{
		string s;
		cin >> s;
		++mp[s];
	}

	for (auto value : mp)
	{
		if (2 <= value.second)
		{
			v.push_back(value.first);
		}
	}

	sort(v.begin(), v.end());

	cout << v.size() << '\n';

	for (auto value : v)
	{
		cout << value << '\n';
	}

	return 0;
}
#pragma endregion

#pragma region 중복 고려 O
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<string> v;
map<string, int> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		++mp[s];
	}

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;

		if (0 < mp[s])
		{
			v.push_back(s);
		}
	}

	sort(v.begin(), v.end());

	cout << v.size() << '\n';

	for (auto value : v)
	{
		cout << value << '\n';
	}

	return 0;
}
#pragma endregion
