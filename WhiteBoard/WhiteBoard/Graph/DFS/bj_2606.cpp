#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> V[104];
bool Visited[104];
int Res;
int n, m;

void DFS(int InCur)
{
	Visited[InCur] = true;

	for (int Node : V[InCur])
	{
		if (!Visited[Node])
		{
			++Res;
			DFS(Node);
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}

	DFS(1);

	cout << Res;

	return 0;
}