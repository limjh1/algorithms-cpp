// link: https://www.acmicpc.net/problem/27866
// date: 2025-12-10
// idea: string

#include <iostream>
#include <map>

using namespace std;

string s;
int idx;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	cin >> idx;

	cout << s[idx - 1];

	return 0;
}