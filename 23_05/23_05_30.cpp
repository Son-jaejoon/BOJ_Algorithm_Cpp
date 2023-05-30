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

/* 3187번 양치기 꿍
// 해설 : BFS
// url : https://www.acmicpc.net/problem/3187

int R, C, total_sheep, total_wolf;
vector<vector<char>> board;
vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> R >> C;

    board.assign(R, vector<char>(C, '0'));
    visited.assign(R, vector<bool>(C, false));

    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            cin >> board[i][j];
        }
    }
}

void eat_some(const int &start_y, const int &start_x)
{
    int curr_sheep_cnt = 0, curr_wolf_cnt = 0;

    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    visited[start_y][start_x] = true;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        if(board[y][x] == 'k')
            curr_sheep_cnt++;
        else if(board[y][x] == 'v')
            curr_wolf_cnt++;

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= R || nx >= C)
                continue;
            
            if(board[ny][nx] == '#')
                continue;
            
            if(visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }

    if(curr_sheep_cnt > curr_wolf_cnt)
        total_sheep += curr_sheep_cnt;
    else
        total_wolf += curr_wolf_cnt;
}

void solution()
{
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            if(board[i][j] == '#' || visited[i][j])
                continue;
            
            eat_some(i, j);
        }
    }

    cout << total_sheep << " " << total_wolf;
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