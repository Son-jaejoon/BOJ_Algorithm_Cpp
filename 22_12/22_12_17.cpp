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

/* 7569번 토마토
// 해설 : bfs 3차원 배열

struct info
{
    int x, y, z, cnt;
};

info create(int x, int y, int z, int cnt)
{
    info n_info;
    n_info.x = x;
    n_info.y = y;
    n_info.z = z;
    n_info.cnt = cnt;

    return n_info;
}

int m, n, h, answer;
int box[102][102][102];
bool visited[102][102][102];

int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

queue<info> q;

void input()
{
    cin >> m >> n >> h;

    for(int i = 0 ; i < h ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            for(int k = 0 ; k < m ; k++)
            {
                cin >> box[j][k][i];

                if(box[j][k][i] == 1)
                {
                    q.emplace(create(j, k, i, 0));
                    visited[j][k][i] = true;
                }
                else if(box[j][k][i] == -1)
                {
                    visited[j][k][i] = true;
                }
            }
        }
    }
}

void print_answer()
{
    for(int i = 0 ; i < h ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            for(int k = 0 ; k < m ; k++)
            {
                if(!visited[j][k][i])
                {
                    cout << -1;
                    return;
                }
            }
        }
    }

    cout << answer;
}

void solution()
{
    while(!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        int z = q.front().z;
        int cnt = q.front().cnt;
        q.pop();

        answer = max(answer, cnt);

        for(int i = 0 ; i < 6 ; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            
            if(nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h)
                continue;
            
            if(visited[nx][ny][nz])
                continue;

            q.emplace(create(nx, ny, nz, cnt + 1));
            visited[nx][ny][nz] = true;
        }
    }

    print_answer();
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