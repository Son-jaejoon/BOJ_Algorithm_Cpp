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

/* 2583번 영역 구하기
// 해설 : BFS
// url : https://www.acmicpc.net/problem/2583

int N, M, K;
vector<vector<int>> graph;
priority_queue<int, vector<int>, greater<>> answer;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M >> K;
    graph.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < K ; i++)
    {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        for(int r = x1 ; r < x2 ; r++)
        {
            for(int c = y1 ; c < y2 ; c++)
            {
                graph[r][c] = 1;
            }
        }
    }
}

int bfs(int start_y, int start_x)
{
    int cnt = 0;

    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    graph[start_y][start_x] = 1;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        cnt++;
        q.pop();
        
        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(graph[ny][nx] == 1)
                continue;
            
            graph[ny][nx] = 1;
            q.emplace(make_pair(ny, nx));
        }
    }

    return cnt;
}

void solution()
{
    int total = 0;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(graph[i][j] == 1)
                continue;

            total++;
            answer.emplace(bfs(i, j));
        }
    }

    cout << total << endl;

    while(!answer.empty())
    {
        cout << answer.top() << " ";
        answer.pop();
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