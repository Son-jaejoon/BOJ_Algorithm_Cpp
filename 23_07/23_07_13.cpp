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

/* 2589번 보물섬
// 해설 : 브루트포스, bfs
// url : https://www.acmicpc.net/problem/2589

int N, M;
vector<vector<char>> board;
vector<pair<int, int>> treasure;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M;
    board.assign(N, vector<char>(M, '1'));

    for(int i = 0 ;  i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> board[i][j];

            if(board[i][j] == 'L')
                treasure.emplace_back(make_pair(i, j));
        }
    }
}

int find_distance(const int &start_y, const int &start_x)
{
    int result = 0;

    vector<vector<int>> visited(N, vector<int>(M, -1));

    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    visited[start_y][start_x] = 0;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(board[ny][nx] == 'W')
                continue;
            
            if(visited[ny][nx] != -1)
                continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.emplace(make_pair(ny, nx));
            result = max(result, visited[ny][nx]);
        }
    }

    return result;
}

void solution()
{
    int answer = 0;

    for(auto xy : treasure)
    {
        answer = max(answer, find_distance(xy.first, xy.second));
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