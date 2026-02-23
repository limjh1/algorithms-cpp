#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 9;
vector<int> V;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < n; i++)
	{
		int c; 
		cin >> c;

		V.push_back(c);
	}

	sort(V.begin(), V.end());

	while (next_permutation(V.begin(), V.end()))
	{
		int Sum = 0;

		for (int i = 0; i < 7; i++)
		{
			Sum += V[i];
		}

		if (Sum == 100)
		{
			break;
		}
	}

	vector<int> Ret;
	for (int i = 0; i < 7; i++)
	{
		Ret.push_back(V[i]);
	}

	sort(Ret.begin(), Ret.end());

	for (int i : Ret)
	{
		cout << i << '\n';
	}

	return 0;
}