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

/* 1926번 그림
// 해설 : BFS
// url : https://www.acmicpc.net/problem/1926

int N, M;
vector<vector<int>> v;
vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M;
    v.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> v[i][j];
        }
    }
}

int bfs(int start_y, int start_x)
{
    int area_size = 0;
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        area_size++;
        q.pop();

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;

            if(v[ny][nx] == 0)
                continue;

            if(visited[ny][nx])
                continue;

            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }

    return area_size;
}

void solution()
{
    visited.assign(N, vector<bool>(M, false));
    int answer_cnt = 0;
    int answer_max = 0;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(v[i][j] == 0)
                continue;
            
            if(visited[i][j])
                continue;

            visited[i][j] = true;
            answer_max = max(answer_max, bfs(i, j));
            answer_cnt++;
        }
    }

    cout << answer_cnt << endl;
    cout << answer_max << endl;
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