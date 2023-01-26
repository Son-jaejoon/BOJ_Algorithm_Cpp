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

/* 17182번 우주 탐사선
// 해설 : 플로이드 워샬, DFS
// url : https://www.acmicpc.net/problem/17182

int N, K;
vector<vector<int>> dist;
vector<bool> visited;

int answer = 987654321;

void input()
{
    cin >> N >> K;
    dist.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> dist[i][j];
        }
    }
}

void floyd_warshall()
{
    for(int k = 0 ; k < N ; k++)
    {
        for(int i = 0 ; i < N ; i++)
        {
            for(int j = 0 ; j < N ; j++)
            {
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}

void dfs(int idx, int result, int cnt)
{
    if(answer < result)
        return;
    
    if(cnt == N)
    {
        answer = min(answer, result);
        return;
    }

    for(int i = 0 ; i < N ; i++)
    {
        if(visited[i])
            continue;
        
        visited[i] = true;
        dfs(i, result + dist[idx][i], cnt + 1);
        visited[i] = false;
    } 
}

void solution()
{
    floyd_warshall();
    visited.assign(N, false);
    visited[K] = true;
    dfs(K, 0, 1);

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