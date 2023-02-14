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

/* 8061번 Bitmap
// 해설 : bfs, 구현
// url : https://www.acmicpc.net/problem/8061

int N, M;
vector<vector<int>> v;
vector<vector<int>> que;
vector<vector<int>> visited;
int started, ended;

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
            char ch;
            cin >> ch;
            v[i][j] = ch - '0';
        }
    }
}

void bfs()
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(v[i][j] == 1)
            {
                que[ended][0] = i;
                que[ended++][1] = j;
                visited[i][j] = 1;
            }
        }
    }

    while(started != ended)
    {
        int y = que[started][0];
        int x = que[started++][1];

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(!visited[ny][nx])
            {
                visited[ny][nx] = visited[y][x] + 1;
                que[ended][0] = ny;
                que[ended++][1] = nx;
            }
        }
    }
}

void solution()
{
    visited.assign(N, vector<int>(M, 0));
    que.assign((N*M) + 1, vector<int>(2, 0));

    bfs();

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cout << visited[i][j] - 1 << " ";
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