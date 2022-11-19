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

/* 11404번 플로이드
// 해설 : 가중치가 자연수로만 이루어져 있어 다익스트라로 해결했는데 찾아보니 플로이드 워샬로 분류되어 있었다.

int N, M;

vector<pair<int, int>> graph[101];
vector<int> v;

void solution(int a, int b)
{
    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(a, b));
    v[a] = b;

    while(!pq.empty())
    {
        int curr = pq.top().first;
        int cost = -pq.top().second;
        pq.pop();

        if(v[curr] < cost)
            continue;

        for(int i = 0 ; i < graph[curr].size() ; i++)
        {
            int next = graph[curr][i].first;
            int next_cost = graph[curr][i].second + cost;

            if(v[next] > next_cost)
            {
                v[next] = next_cost;
                pq.emplace(make_pair(next, -next_cost));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    v.assign(N + 1, 987654321);

    for(int i = 0 ; i < M ; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;
        graph[a].emplace_back(make_pair(b, c));
    }

    for(int i = 1 ; i <= N ; i++)
    {
        fill(v.begin(), v.end(), 987654321);
        solution(i, 0);

        for(int j = 1 ; j <= N ; j++)
        {
            if(i == j || v[j] == 987654321)
                cout << "0 ";
            else
                cout << v[j] << " ";
        }

        cout << endl;
    }
}
*/