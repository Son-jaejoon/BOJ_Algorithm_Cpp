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

/* 2468번 안전 영역
// 해설 : BFS
// url : https://www.acmicpc.net/problem/2468

int N, max_num;
vector<vector<int>> road;
vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N;

    road.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> road[i][j];

            max_num = max(max_num, road[i][j]);
        }
    }
}

void bfs(int start_y, int start_x, int curr_height)
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    visited[start_y][start_x] = true;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= N)
                continue;
            
            if(road[ny][nx] < curr_height)
                continue;
            
            if(visited[ny][nx])
                continue;

            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }
}

int height_calculate(int curr_height)
{
    int cnt = 0;
    visited.assign(N, vector<bool>(N, false));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if(road[i][j] < curr_height)
                continue;
            
            if(visited[i][j])
                continue;

            cnt++;
            bfs(i, j, curr_height);
        }
    }

    return cnt;
}

void solution()
{
    int answer = 0;

    while(max_num > 0)
    {
        answer = max(answer, height_calculate(max_num));
        max_num--;
    }

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