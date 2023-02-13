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

/* 6087번 레이저 통신
// 해설 : BFS, 방문 처리, 재채점 실패해서 다시 품
// url : https://www.acmicpc.net/problem/6087

int W, H;
char razer[101][101];
vector<vector<vector<int>>> visited;
int start_y = -1;
int start_x = -1;
int end_y = -1;
int end_x = -1;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

struct info
{
    int y, x, mirror, dir;
};

info create(int y, int x, int mirror, int dir)
{
    info n_info;

    n_info.y = y;
    n_info.x = x;
    n_info.mirror = mirror;
    n_info.dir = dir;

    return n_info;
}

void input()
{
    cin >> W >> H;
    visited.assign(H, vector<vector<int>>(W, vector<int>(4, 987654321)));

    for(int i = 0 ; i < H ; i++)
    {
        for(int j = 0 ; j < W ; j++)
        {
            char ch;
            cin >> ch;
            razer[i][j] = ch;
            
            if(ch == 'C' && start_y == -1)
            {
                start_y = i;
                start_x = j;
            }
            else if(ch == 'C')
            {
                end_y = i;
                end_x = j;
            }
        }
    }
}

void bfs()
{
    queue<info> q;
    int cnt = 0;

    for(int i = 0 ; i < 4 ; i++)
    {
        q.emplace(create(start_y, start_x, cnt, i));
        visited[start_y][start_x][i] = 0;
    }

    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int mirror = q.front().mirror;
        int dir = q.front().dir;

        q.pop();
        
        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= H || nx >= W)
                continue;
            
            if(razer[ny][nx] == '*')
                continue;
               
            int n_mirror = mirror;
            
            if(dir != i)
            {
                n_mirror += 1;
            }
            
            if(visited[ny][nx][i] <= n_mirror)
                continue;
                    
            visited[ny][nx][i] = n_mirror;
            q.emplace(create(ny, nx, n_mirror, i));
        }
    }
}

void solution()
{
    bfs();
    int answer = min({visited[end_y][end_x][0], visited[end_y][end_x][1], visited[end_y][end_x][2], visited[end_y][end_x][3]});
    cout << answer;
    
    return;
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