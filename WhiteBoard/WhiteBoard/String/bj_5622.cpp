#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
string s; 
int answer;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	for (auto c : s)
	{
		answer += Time[c - 'A'];
	}

	cout << answer;

	return 0;
}