#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
#include <cmath>

/* 16948번 데스나이트
//해설 : 단순한 bfs 문제. dy dx를 잘 구현하면 된다.

int N, y, x, want_y, want_x;
bool visited[201][201];

int dy[] = {-2, -2, 0, 0, 2, 2};
int dx[] = {-1, 1, -2, 2, -1, 1};

void bfs(int a, int b)
{
    std::queue<std::pair<std::pair<int, int>, int>> q;
    q.emplace(std::make_pair(std::make_pair(a, b), 0));
    visited[a][b] = true;

    while(!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int cnt = q.front().second;
        q.pop();

        if(y == want_y && x == want_x)
        {
            printf("%d", cnt);
            return;
        }

        for(int i = 0 ; i < 6 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= 0 && nx >= 0 && ny < N && nx < N)
            {
                if(visited[ny][nx] == false)
                {
                    visited[ny][nx] = true;
                    q.emplace(std::make_pair(std::make_pair(ny, nx), cnt + 1));
                }
            }
        }
    }

    printf("-1");
    return;
}

int main()
{
    scanf("%d", &N);
    scanf("%d %d %d %d", &y, &x, &want_y, &want_x);

    bfs(y, x);
}
*/

/* 12946 육각보드
//해설 : 하나를 기준으로 칠해야하는데 0과 1로 칠해져있다면 2로 칠해야하므로 3으로 출력
// 0 = 빨강, 1 = 파랑, 2 = 노랑 이라고 할 시 6각 보드는 최대 3가지 색으로 칠할 수 있다.
// 참고 : https://astrid-dm.tistory.com/380

int N;
int dx[] = {-1, -1, 0, 1, 1, 0};
int dy[] = {0, 1, 1, 0, -1, -1};

int color[51][51];
char arr[51][51];

int ny, nx, y, x;
int ans = 0;

void dfs(int y, int x, int c)
{
    color[y][x] = c;
    ans = std::max(ans, 1);

    for(int i = 0 ; i < 6; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];

        if(arr[ny][nx] == 'X')
        {
            if(color[ny][nx] == -1)
            {
                dfs(ny, nx, 1-c);
                ans = std::max(ans, 2);
            }
            else if(color[ny][nx] == c)
            {
                ans = std::max(ans, 3);
                printf("%d", ans);
                exit(0);
            }
        }
    }
}

int main()
{
    scanf("%d", &N);
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            std::cin>>arr[i][j];
        }
    }

    std::memset(color, -1, sizeof(color));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if(arr[i][j] == 'X' && color[i][j] == -1)
                dfs(i, j, 0);
        }
    }

    printf("%d", ans);
}
*/