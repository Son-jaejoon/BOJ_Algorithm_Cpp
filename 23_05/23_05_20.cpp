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

/* 1303번 전쟁 - 전투
// 해설 : BFS
// url : https://www.acmicpc.net/problem/1303

int N, M;
vector<vector<char>> board;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> M >> N;
    board.assign(N, vector<char>(M, '0'));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> board[i][j];
        }
    }
}

int dfs(int &start_y, int &start_x, char &&color)
{
    int team_cnt = 0;

    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    board[start_y][start_x] = '0';

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        team_cnt++;
        q.pop();

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;

            if(board[ny][nx] != color)
                continue;
            
            board[ny][nx] = '0';
            q.emplace(make_pair(ny, nx));
        }
    }

    return team_cnt*team_cnt;
}

void solution()
{
    int total_white = 0;
    int total_blue = 0;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(board[i][j] == 'W')
                total_white += dfs(i, j, 'W');
            else if(board[i][j] == 'B')
                total_blue += dfs(i, j, 'B');
        }
    }

    cout << total_white << " " << total_blue;
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