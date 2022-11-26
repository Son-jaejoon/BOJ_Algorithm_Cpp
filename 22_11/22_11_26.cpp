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

/* 1238번 파티
// 해설 : 다익스트라 알고리즘

int N, M, X, ans;

vector<int> dist, result;
vector<pair<int, int>> v[1001];

void dijkstra(int start)
{
    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(start, 0));
    dist[start] = 0;

    while(!pq.empty())
    {
        int curr = pq.top().first;
        int total = -pq.top().second;
        pq.pop();

        for(int i = 0 ; i < v[curr].size() ; i++)
        {
            int next = v[curr][i].first;
            int cost = v[curr][i].second;

            if(dist[next] > cost + total)
            {
                dist[next] = cost + total;
                pq.emplace(make_pair(next, -dist[next]));
            }
        }
    }
}

void solution()
{
    for(int i = 1 ; i <= N ; i++)
    {
        fill(dist.begin(), dist.end(), 987654321);
        dijkstra(i);

        result[i] = dist[X];
    }

    fill(dist.begin(), dist.end(), 987654321);
    dijkstra(X);

    for(int i = 1 ; i <= N ; i++)
        result[i] += dist[i];

    cout << *max_element(result.begin(), result.end());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> X;

    dist.assign(N + 1, 987654321);
    result.assign(N + 1, 0);

    for(int i = 0 ; i < M ; i++)
    {
        int a, b, t;

        cin >> a >> b >> t;
        v[a].emplace_back(make_pair(b, t));
    }

    solution();
}
*/