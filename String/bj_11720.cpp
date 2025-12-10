// link: https://www.acmicpc.net/problem/11720
// date: 2025-12-10
// idea: string

#include <iostream>

using namespace std;

int n, sum;
string s;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> s;
	for (auto i : s)
	{
		sum += (i - '0');
	}
	cout << sum;

	return 0;
}