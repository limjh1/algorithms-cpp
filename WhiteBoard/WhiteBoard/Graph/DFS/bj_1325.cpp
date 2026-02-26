#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> V[10004];
bool Visited[10004];
int Sum[10004];
int n, m;

int DFS(int InCur)
{
	int Token = 1;

	Visited[InCur] = true;

	for (int Node : V[InCur])
	{
		if (!Visited[Node])
		{
			Token += DFS(Node);
		}
	}

	return Token;
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		V[b].push_back(a);
	}

	int Max = 0;

	for (int i = 1; i <= n; ++i)
	{
		fill(Visited, Visited + 10004, 0);

		Sum[i] = DFS(i);

		Max = max(Sum[i], Max);
	}

	for (int i = 1; i <= n; ++i)
	{
		if (Max == Sum[i])
		{
			cout << i << " ";
		}			
	}

	return 0;
}