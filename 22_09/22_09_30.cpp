#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 1005번 ACM Craft
// 해설 : 위상정렬

int T, W;

vector<int> inDegree;
vector<vector<int>> graph;
vector<int> cost;
vector<int> result;

void solution()
{
    queue<int> q;

    for(int i = 1 ; i < inDegree.size() ; i++)
    {
        if(inDegree[i] == 0)
            q.emplace(i);
    }

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        if(cur == W)
        {
            cout << result[cur] << endl;
            return;
        }

        for(int i = 0 ; i < graph[cur].size() ; i++)
        {
            int next = graph[cur][i];

            result[next] = max(result[next], result[cur] + cost[next]);

            if(--inDegree[next] == 0)
                q.emplace(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for(int i = 0 ; i < T ; i++)
    {
        inDegree.clear();
        graph.clear();
        cost.clear();
        result.clear();

        int N, K;

        cin >> N >> K;

        inDegree.assign(N + 1, 0);
        cost.assign(N + 1, 0);
        result.assign(N + 1, 0);
        graph.assign(N + 1, vector<int>(0, 0));

        for(int j = 1 ; j <= N ; j++)
        {
            cin >> cost[j];
            result[j] = cost[j];
        }

        for(int j = 0 ; j < K ; j++)
        {
            int x, y;
            
            cin >> x >> y;

            inDegree[y]++;
            graph[x].emplace_back(y);
        }

        cin >> W;

        solution();
    }
}
*/

/* 1766번 문제집
// 해설 : 위상 정렬 + 최소힙, vector로 하려했으니 시간 제한 이슈로 priority queue 활용.

int N, M;

vector<int> inDegree;
vector<vector<int>> graph;

void solution()
{
    priority_queue<int, vector<int>, greater<int>> q;

    for(int i = 1 ; i <= N ; i++)
    {
        if(inDegree[i] == 0)
            q.emplace(i);
    }

    while(!q.empty())
    {
        int cur = q.top();
        q.pop();

        cout << cur << " ";

        for(int i = 0 ; i < graph[cur].size() ; i++)
        {
            int next = graph[cur][i];

            if(--inDegree[next] == 0)
                q.emplace(next);
        }
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    inDegree.assign(N + 1, 0);
    graph.assign(N + 1, vector<int>(0, 0));

    for(int i = 0 ; i < M ; i++)
    {
        int a, b;

        cin >> a >> b;
        inDegree[b]++;
        graph[a].emplace_back(b);
    }

    solution();
}
*/