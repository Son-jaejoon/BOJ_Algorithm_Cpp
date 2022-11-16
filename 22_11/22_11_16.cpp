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

/* 1753번 최단경로
// 해설 : 다익스트라 우선순위 큐로 구현하기.

#define MAX 20010

int V, E, start;
int dist[MAX];
vector<pair<int, int>> graph[MAX];

void solution()
{
    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(0, start));
    dist[start] = 0;

    while(!pq.empty())
    {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        for(int i = 0 ; i < graph[cur].size() ; i++)
        {
            int next = graph[cur][i].first;
            int next_cost = graph[cur][i].second;

            if(dist[next] > cost + next_cost)
            {
                dist[next] = cost + next_cost;
                pq.emplace(make_pair(-dist[next], next));
            }
        }
    }

    for(int i = 1 ; i <= V ; i++)
    {
        if(dist[i] == 987654321)
            cout << "INF" << endl;
        else
            cout << dist[i] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E >> start;

    for(int i = 0 ; i < E ; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;

        graph[a].emplace_back(make_pair(b, c));
    }

    for(int i = 1 ; i <= V ; i++)
    {
        dist[i] = 987654321;
    }

    solution();
}
*/