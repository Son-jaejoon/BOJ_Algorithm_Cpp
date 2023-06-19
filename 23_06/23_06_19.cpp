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

/* 6118번 숨바꼭질
// 해설 : DFS
// url : https://www.acmicpc.net/problem/6118

int N, M;
vector<vector<int>> graph;

void input()
{
    cin >> N >> M;

    graph.assign(N + 1, vector<int>());

    int A, B;
    
    for(int i = 0 ; i < M ; i++)
    {
        cin >> A >> B;
        graph[A].emplace_back(B);
        graph[B].emplace_back(A);
    }
}

void solution()
{
    vector<int> rooms(N + 1, -1);
    rooms[1] = 0;

    queue<pair<int, int>> q;
    q.emplace(make_pair(1, 1));
    int max_distance = 0;

    while(!q.empty())
    {
        int curr_idx = q.front().first;
        int distance = q.front().second;
        q.pop();

        for(int i = 0 ; i < graph[curr_idx].size() ; i++)
        {
            int next_idx = graph[curr_idx][i];

            if(rooms[next_idx] != -1)
                continue;
            
            rooms[next_idx] = distance;
            max_distance = max(max_distance, distance);
            q.emplace(make_pair(next_idx, distance + 1));
        }
    }

    int answer_idx = 987654321, cnt = 0;

    for(int idx = 1 ; idx <= N ; idx++)
    {
        if(rooms[idx] != max_distance)
            continue;
        
        answer_idx = min(answer_idx, idx);
        cnt++;
    }

    cout << answer_idx << " " << max_distance << " " << cnt;
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