#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> V[100004];
bool Visited[100004];
int Parent[100004];
int n;

void DFS(int InCur)
{
	Visited[InCur] = true;

	for (int Node : V[InCur])
	{
		if (!Visited[Node])
		{
			Parent[Node] = InCur;
			DFS(Node);
		}
	}

	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n - 1; ++i)
	{
		int a, b;
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}

	DFS(1);

	for (int i = 2; i <= n; ++i)
	{
		cout << Parent[i] << '\n';
	}

	return 0;
}