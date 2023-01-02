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

/* 11724번 연결 요소의 개수
// 해설 : 무향 그래프, DFS
// url : https://www.acmicpc.net/problem/11724

int N, M, answer;
vector<int> graph[1001];
vector<bool> visited;

void input()
{
    cin >> N >> M;

    int u, v;
    for(int i = 0 ; i < M ; i++)
    {
        cin >> u >> v;

        graph[u].emplace_back(v);
        graph[v].emplace_back(u);
    }
}

void dfs(int curr)
{
    for(int i = 0 ; i < graph[curr].size() ; i++)
    {
        int next = graph[curr][i];

        if(visited[next])
            continue;
        
        visited[next] = true;
        dfs(next);
    }
}

void solution()
{
    visited.assign(N + 1, false);
    visited[0] = true;

    while(find(visited.begin(), visited.end(), false) != visited.end())
    {
        int idx = find(visited.begin(), visited.end(), false) - visited.begin();
        visited[idx] = true;
        dfs(idx);
        
        answer++;
    }

    cout << answer;
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