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

/* 2234번 성곽
// 해설 : 비트마스킹, BFS
// url : https://www.acmicpc.net/problem/2234

int N, M;

vector<vector<int>> castle;
vector<vector<bool>> visited;

int dy[] = {0, -1, 0, 1};
int dx[] = {-1, 0, 1, 0};

void input()
{
    cin >> M >> N;

    castle.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> castle[i][j];
        }
    }
}

int bfs(int start_y, int start_x)
{
    int cnt = 0;
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));

    visited[start_y][start_x] = true;
    cnt++;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        int wall = 1;

        for(int i = 0 ; i < 4 ; i++)
        {
            if((castle[y][x] & wall) != wall)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                {
                    wall *= 2;
                    continue;
                }

                if(visited[ny][nx])
                {   
                    wall *= 2; 
                    continue;
                }

                int num = castle[y][x] & wall;
                visited[ny][nx] = true;
                cnt++;
                q.emplace(make_pair(ny, nx));
            }

            wall *= 2;
        }
    }

    return cnt;
}

void solution()
{
    int room_size = 0;
    int room_max = 0;

    visited.assign(N, vector<bool>(M, false));
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(visited[i][j])
                continue;
            
            room_size++;
            room_max = max(room_max, bfs(i, j));
        }
    }

    cout << room_size << endl << room_max << endl;
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            for(int wall = 1 ; wall <= 8 ; wall *= 2)
            {
                if((castle[i][j] & wall) != wall)
                    continue;
                
                visited.assign(N, vector<bool>(M, false));
                castle[i][j] -= wall;

                room_max = max(room_max, bfs(i, j));
                castle[i][j] += wall;
            }
        }
    }

    cout << room_max;
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