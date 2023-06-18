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

/* 14940번 쉬운 최단거리
// 해설 : DFS
// url : https://www.acmicpc.net/problem/14940


int N, M, start_y, start_x;
vector<vector<int>> board;
vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M;
    board.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> board[i][j];

            if(board[i][j] == 2)
                start_y = i, start_x = j;
        }
    }
}

struct info
{
    int y, x, cnt;
};

info create(int y, int x, int cnt)
{
    info n_info;
    n_info.y = y;
    n_info.x = x;
    n_info.cnt = cnt;

    return n_info;
}

void solution()
{
    visited.assign(N, vector<bool>(M, false));
    queue<info> q;
    q.emplace(create(start_y, start_x, 1));
    visited[start_y][start_x] = true;
    board[start_y][start_x] = 0;

    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int cnt = q.front().cnt;
        q.pop();

        for(int dfs = 0 ; dfs < 4 ; dfs++)
        {
            int ny = y + dy[dfs];
            int nx = x + dx[dfs];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(visited[ny][nx] || board[ny][nx] == 0)
                continue;
            
            board[ny][nx] = cnt;
            visited[ny][nx] = true;
            q.emplace(create(ny, nx, cnt + 1));
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(board[i][j] == 1 && visited[i][j] == false)
                cout << "-1 ";
            else
                cout << board[i][j] << " ";
        }

        cout << endl;
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