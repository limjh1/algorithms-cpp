#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int n;
string s; 

bool Checked()
{
	stack<char> stk;
	for (auto c : s)
	{
		if (c == '(')
		{
			stk.push(c);
		}
		else
		{
			if (stk.size() > 0)
			{
				stk.pop();
			}
			else
			{
				return false;
			}
		}
	}

	return stk.empty();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		cout << ((Checked()) ? "YES" : "NO") << '\n';
	}

	return 0;
}