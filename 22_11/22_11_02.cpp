#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2162번 선분 그룹
// 해설 : 선분 교차 알고리즘 + BFS + Union-Find

#define X first
#define Y second
typedef pair<int, int> pii;

int N, group_num, seg_num;
bool visit[3001];
int parent[3001];
vector<int> graph[3001];
vector<pii> v[3001];
queue<int> q;

int CCW(pii A, pii B, pii C)
{
	int tmp = A.X * B.Y + B.X * C.Y + C.X * A.Y;
	tmp -= B.X * A.Y + C.X * B.Y + A.X * C.Y;

	if (tmp > 0) return 1;
	else if (tmp == 0) return 0;
	else if (tmp < 0) return -1;

    return 0;
}

bool check(pii A, pii B, pii C, pii D)
{
	int ans1 = CCW(A, B, C) * CCW(A, B, D);
	int ans2 = CCW(C, D, A) * CCW(C, D, B);

	if (ans1 == 0 && ans2 == 0)
	{
		if (A > B) swap(A, B);
		if (C > D) swap(C, D);
		
		if (A <= D && B >= C) return true;
		else return false;
	}
	else 
	{
		if (ans1 <= 0 && ans2 <= 0) return true;
		else return false;
	}
}

int find_parent(int u)
{
	if (u == parent[u]) return u;
	else return parent[u] = find_parent(parent[u]);
}

bool union_segment(int u, int v)
{
	u = find_parent(u);
	v = find_parent(v);

	if (u == v) return false;
	else
	{
		parent[u] = v;

		graph[u].push_back(v);
		graph[v].push_back(u);

		return true;
	}
}

void BFS(int x)
{
	int num = 1; 
	q.push(x);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		visit[now] = true;
		for (int i = 0; i < graph[now].size(); i++)
		{
			int next = graph[now][i];

			if (!visit[next])
			{
				num++;
				q.push(next);
			}
		}
	}

	seg_num = max(seg_num, num);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	int x1, x2, y1, y2;
	for (int i = 1; i <= N; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		v[i].push_back({ x1,y1 }); 
		v[i].push_back({ x2,y2 });
	}

	
	for (int i = 1; i <= N; i++)
		parent[i] = i;

	for (int i = 1; i <= N; i++)
	{
		for (int j = i + 1; j <= N; j++)
		{
			bool state = check(v[i][0], v[i][1], v[j][0], v[j][1]);

			if (state == true)
				union_segment(i, j);
		}
	}

	for (int i = 1; i <= N; i++)
	{
		if (!visit[i])
		{
			group_num++;
			BFS(i);
		}
	}

	cout << group_num << endl;
	cout << seg_num << endl;
}
*/