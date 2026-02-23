// link: https://www.acmicpc.net/problem/1269
// date: 2025-12-10
// idea: map, n log n + m log n + (n + m), 

#include <iostream>
#include <unordered_map>

using namespace std;

int n, m;
unordered_map<int, int> mp;
int cnt;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < (n + m); ++i)
	{
		int c;
		cin >> c;
		++mp[c];
	}

	for (auto i : mp)
	{
		if (i.second == 1)
			++cnt;
	}

	cout << cnt;

	return 0;
}