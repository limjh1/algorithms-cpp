#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N;
int Res = 666;
int Check = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	while (true)
	{
		string strRes = to_string(Res);

		if (string::npos != strRes.find("666"))
		{
			++Check;
		}

		if (N == Check)
		{
			break;
		}			

		++Res;
	}

	cout << Res;

	return 0;
}