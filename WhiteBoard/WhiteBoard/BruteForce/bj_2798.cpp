#include <iostream>

using namespace std;

int Minimum = 310000;
int Array[104];
int Sum = 0;
int n, m;
int Ret;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				Sum = Array[i] + Array[j] + Array[k];

				int Temp = m - Sum;

				if (Minimum > Temp && Temp >= 0)
				{
					Minimum = Temp;
					Ret = Sum;
				}
			}
		}
	}

	cout << Ret << '\n';

	return 0;
}