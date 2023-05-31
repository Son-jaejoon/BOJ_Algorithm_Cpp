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

/* 14716번 현수막
// 해설 : BFS
// url : https://www.acmicpc.net/problem/14716

int N, M;
vector<vector<int>> board;
vector<vector<bool>> visited;

int dy[] = {-1, -1, -1, 1, 1, 1, 0, 0};
int dx[] = {-1, 0, 1, -1, 0, 1, -1, 1};

void input()
{
    cin >> N >> M;
    board.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> board[i][j];
        }
    }
}

void bfs(const int &start_y, const int &start_x)
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int dir = 0 ; dir < 8 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];
            
            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(board[ny][nx] == 0)
                continue;

            if(visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }
}

void solution()
{   
    int answer = 0;

    visited.assign(N, vector<bool>(M, false));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(board[i][j] == 0)
                continue;
            
            if(visited[i][j])
                continue;
            
            answer++;
            visited[i][j] = true;
            bfs(i, j);
        }
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