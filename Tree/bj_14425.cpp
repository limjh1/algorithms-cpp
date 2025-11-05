#include <iostream>
#include <map>

using namespace std;

int n, m;
map<string, bool> mp;
int cnt;

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
		mp[s] = true;
	}

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;
		if (mp[s])
			++cnt;
	}

	cout << cnt;

	return 0;
}