#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#define endl "\n"

using namespace std;

/* 1167번 트리의 지름
// 해설 : dfs 2번, 트리의 지름 복습.

int V;
vector<pair<int, int>> graph[100001];
vector<bool> visited;

int dist = 0;
int end_node;

void solution(int start, int curr_cost)
{
    if(visited[start])
        return;
    
    visited[start] = true;
    
    if(dist < curr_cost)
    {
        dist = curr_cost;
        end_node = start;
    }

    for(int i = 0 ; i < graph[start].size() ; i++)
    {
        int next_node = graph[start][i].first;
        int cost = graph[start][i].second;

        solution(next_node, curr_cost + cost);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V;
    
    visited.assign(V + 1, false);

    for(int i = 0 ; i < V ; i++)
    {
        int node_idx;
        cin >> node_idx;

        int next_node;
        cin >> next_node;

        while(next_node != -1)
        {
            int cost;
            cin >> cost;

            graph[node_idx].emplace_back(make_pair(next_node, cost));

            cin >> next_node;
        }
    }


    solution(1, 0);

    fill(visited.begin(), visited.end(), false);
    dist = 0;

    solution(end_node, 0);

    cout << dist;
}
*/