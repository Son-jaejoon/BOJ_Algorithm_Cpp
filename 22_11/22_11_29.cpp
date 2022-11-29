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
#include <stack>
#define endl "\n"

using namespace std;

/* 1504번 특정한 최단 경로
// 해설 : 다익스트라 알고리즘

int N, E, v1, v2, ans;

vector<pair<int, int>> v[801];
vector<int> dist;

void move(int start)
{
    dist.assign(N + 1, 987654321);
    dist[start] = 0;

    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(start, 0));

    while(!pq.empty())
    {
        int curr = pq.top().first;
        int total = -pq.top().second;
        pq.pop();

        if(dist[curr] < total)
            continue;
    
        for(int i = 0 ; i < v[curr].size() ; i++)
        {
            int next = v[curr][i].first;
            int cost = v[curr][i].second;

            if(dist[next] > total + cost)
            {
                dist[next] = total + cost;
                pq.emplace(make_pair(next, -dist[next]));
            }
        }
    }
}

void solution()
{
    int dist_start_v1, dist_start_v2, dist_v1_v2, dist_end_v1, dist_end_v2;

    move(1);
    dist_start_v1 = dist[v1];
    dist_start_v2 = dist[v2];

    move(v1);
    dist_v1_v2 = dist[v2];
    dist_end_v1 = dist[N];

    move(v2);
    dist_end_v2 = dist[N];

    if(dist_v1_v2 == 987654321 || dist_start_v1 == 987654321 || dist_start_v2 == 987654321 || dist_end_v1 == 987654321 || dist_end_v2 == 987654321)
    {
        cout << "-1";
        return;
    }

    ans = min(dist_start_v1 + dist_v1_v2 + dist_end_v2, dist_start_v2 + dist_v1_v2 + dist_end_v1);

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> E;

    for(int i = 0 ; i < E ; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;
        v[a].emplace_back(make_pair(b, c));
        v[b].emplace_back(make_pair(a, c));
    }

    cin >> v1 >> v2;
    solution();
}
*/