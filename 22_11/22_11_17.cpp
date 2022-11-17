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

/* 1916번 최소비용 구하기
// 해설 : 다익스트라 알고리즘 기본

int N, M, ans_start, ans_end;
vector<pair<int, int>> graph[1001];

void solution()
{
    vector<int> dist;
    dist.assign(N + 1, 987654321);
    dist[ans_start] = 0;

    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(ans_start, 0));

    while(!pq.empty())
    {
        int curr = pq.top().first;
        int total = -pq.top().second;
        pq.pop();
        
        if(dist[curr] < total)
            continue;

        for(int i = 0 ; i < graph[curr].size() ; i++)
        {
            int next = graph[curr][i].first;
            int cost = graph[curr][i].second;

            if(dist[next] > total + cost)
            {
                dist[next] = total + cost;
                pq.emplace(make_pair(next, -dist[next]));
            }
        }
    }

    

    cout << dist[ans_end];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> N >> M;

    int st, ed, cost;

    for(int i = 0 ; i < M ; i++)
    {
        cin >> st >> ed >> cost;
        graph[st].emplace_back(make_pair(ed, cost));
    }
    
    cin >> ans_start >> ans_end;

    solution();
}
*/