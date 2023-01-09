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

/* 1761번 정점들의 거리
// 해설 : 최소 공통 조상, 부모 노드 계산하기
// 참고 : https://4legs-study.tistory.com/121
// url : https://www.acmicpc.net/problem/1761

int N, M;
int depth[40001];
int parent[40001][20];
int dist[40001][20];

vector<pair<int, int>> graph[40001];
vector<pair<int, int>> answer;

void input()
{
    cin >> N;

    for(int i = 0 ; i < N - 1 ; i++)
    {
        int a, b, cost;
        
        cin >> a >> b >> cost;
        graph[a].emplace_back(make_pair(b, cost));
        graph[b].emplace_back(make_pair(a, cost));
    }

    cin >> M;

    for(int i = 0 ; i < M ; i++)
    {
        int a, b;

        cin >> a >> b;
        answer.emplace_back(make_pair(a, b));
    }
}

void setting_parent(int par, int now, int dep, int cost)
{
    depth[now] = dep;
    parent[now][0] = par;
    dist[now][0] = cost;

    for(int i = 0 ; i < graph[now].size() ; i++)
    {
        if(graph[now][i].first == par)
            continue;
        
        setting_parent(now, graph[now][i].first, dep + 1, graph[now][i].second);
    }

    return;
}

int dist_calculate(int a, int b)
{
    int sum = 0;

    if(depth[a] != depth[b])
    {
        if(depth[a] < depth[b])
            swap(a, b);

        int diff = depth[a] - depth[b];

        for(int i = 0 ; 0 < diff ; i++)
        {
            if(diff % 2 == 1)
            {
                sum += dist[a][i];
                a = parent[a][i];
            }

            diff = diff >> 1;
        }
    }

    if(a != b)
    {
        for(int i = 19 ; i >= 0 ; i--)
        {
            if(parent[a][i] != 0 && parent[a][i] != parent[b][i])
            {
                sum += (dist[a][i] + dist[b][i]);
                a = parent[a][i];
                b = parent[b][i];
            }
        }

        sum += dist[a][0] + dist[b][0];
    }

    return sum;
}

void solution()
{
    setting_parent(0, 1, 0, 0);

    for(int i = 1 ; i < 20 ; i++)
    {
        for(int idx = 2 ; idx <= N ; idx++)
        {
            if(parent[idx][i - 1] == 0)
                continue;
            
            parent[idx][i] = parent[parent[idx][i - 1]][i - 1];
            dist[idx][i] = dist[idx][i - 1] + dist[parent[idx][i - 1]][i - 1];
        }
    }

    for(int i = 0 ; i < answer.size() ; i++)
    {
        int a = answer[i].first;
        int b = answer[i].second;

        int result = dist_calculate(a, b);
        cout << result << endl;
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