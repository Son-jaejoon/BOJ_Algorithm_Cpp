#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#include <deque>
#define endl "\n"

using namespace std;

/* 24479번 깊이 우선 탐색 1
// 해설 : DFS, 정렬
// url : https://www.acmicpc.net/problem/24479

int N, M, R;
vector<int> adj[100001], visited;

void input()
{
    cin >> N >> M >> R;

    for(int i = 0 ; i < M ; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
}

int dfs(int curr_node, int dist)
{
    visited[curr_node] = dist;

    for(int i = 0 ; i < adj[curr_node].size() ; i++)
    {
        int next_node = adj[curr_node][i];
        
        if(visited[next_node] != 0)
            continue;
        
        dist = dfs(next_node, dist + 1);
    }

    return dist;
}

void solution()
{
    for(int i = 1 ; i <= N ; i++)
        sort(adj[i].begin(), adj[i].end());

    visited.assign(N + 1, 0);

    dfs(R, 1);

    for(int i = 1 ; i <= N ; i++)
    {
        cout << visited[i] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
*/