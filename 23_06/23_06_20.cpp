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

/* 15900번 나무 탈출
// 해설 : BFS, graph
// url : https://www.acmicpc.net/problem/15900

int N;
vector<vector<int>> graph;

void input()
{
    cin >> N;
    graph.assign(N + 1, vector<int>());

    int a, b;

    for(int i = 1 ; i < N ; i++)
    {
        cin >> a >> b;
        
        graph[a].emplace_back(b);
        graph[b].emplace_back(a);
    }
}

void solution()
{
    vector<bool> visited(N + 1, false);
    visited[1] = true;

    queue<pair<int, int>> q;
    q.emplace(make_pair(1, 0));

    int cnt = 0;

    while(!q.empty())
    {
        int curr_node = q.front().first;
        int distance = q.front().second;
        bool is_leaf = true;
        q.pop();

        for(int i = 0 ; i < graph[curr_node].size() ; i++)
        {
            int next_node = graph[curr_node][i];

            if(visited[next_node])
                continue;
            
            visited[next_node] = true;
            q.emplace(make_pair(next_node, distance + 1));
            is_leaf = false;
        }

        if(is_leaf)
            cnt += distance;
    }

    if(cnt % 2 == 1)
        cout << "Yes";
    else
        cout << "No";
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