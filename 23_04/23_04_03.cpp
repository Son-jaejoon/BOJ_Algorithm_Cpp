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

/* 5567번 결혼식
// 해설 : 그래프
// url : https://www.acmicpc.net/problem/5567

int N, M;
int answer;
vector<int> v[501];
vector<bool> visited;

void input()
{
    cin >> N >> M;

    for(int i = 0 ; i < M ; i++)
    {
        int a,b;

        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
}

void bfs()
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(1, 0));

    while(!q.empty())
    {
        int curr_idx = q.front().first;
        int dist = q.front().second;
        q.pop();

        if(dist > 1)
            continue;

        for(int i = 0 ; i < v[curr_idx].size() ; i++)
        {
            int next_idx = v[curr_idx][i];

            if(visited[next_idx])
                continue;
            
            answer++;
            visited[next_idx] = true;
            q.emplace(make_pair(next_idx, dist + 1));
        }
    }
}

void solution()
{
    visited.assign(N + 1, false);
    visited[1] = true;

    bfs();

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