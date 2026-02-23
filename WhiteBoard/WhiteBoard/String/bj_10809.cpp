// link: https://www.acmicpc.net/problem/10809
// date: 2025-12-10
// idea: string

#include <iostream>

using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyz";
string s;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	for (int i = 0; i < alpha.size(); ++i)
	{
		cout << (int)s.find(alpha[i]) << " ";
	}

	return 0;
}