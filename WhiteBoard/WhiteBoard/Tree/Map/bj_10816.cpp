// link: https://www.acmicpc.net/problem/10816
// date: 2025-11-14
// idea: map, o(n log N)

#include <iostream>
#include <map>

using namespace std;

int n, m, in;
map<int, int> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> in;
		++mp[in];
	}

	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> in;
		cout << mp[in] << " ";
	}

	return 0;
}