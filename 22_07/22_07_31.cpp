#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <cmath>

/* 16928번 뱀과 사다리 게임
// 해설 : bfs 응용문제 사다리와 뱀을 벡터의 pair을 통해 구현하는 것이 핵심

int N, M, x, y;
int cube[100][100];
std::vector<std::pair<std::pair<int, int>, std::pair<int, int>>> v;
std::queue<std::pair<std::pair<int, int>, int>> q;

bool visited[10][10];

void bfs()
{
    q.emplace(std::make_pair(0, 0), 0);
    visited[0][0] = true;

    while (!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int cnt = q.front().second;
        q.pop();

        if (y == 9 && x == 9)
        {
            printf("%d", cnt);
            return;
        }

        for (int i = 1; i < 7; i++)
        {
            int num = y * 10 + x + i;
            int ny = num / 10;
            int nx = num % 10;

            if (ny >= 0 && nx >= 0 && ny < 10 && nx < 10)
            {
                if (!visited[ny][nx])
                {
                    visited[ny][nx] = true;

                    for (int i = 0; i < v.size(); i++)
                    {
                        if (ny == v[i].first.first && nx == v[i].first.second)
                        {
                            ny = v[i].second.first;
                            nx = v[i].second.second;

                            q.emplace(std::make_pair(ny, nx), cnt + 1);
                            continue;
                        }
                    }

                    q.emplace(std::make_pair(ny, nx), cnt + 1);
                }
            }
        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        x = x - 1;
        y = y - 1;
        v.emplace_back(std::make_pair(x / 10, x % 10), std::make_pair(y / 10, y % 10));
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &x, &y);
        x = x - 1;
        y = y - 1;
        v.emplace_back(std::make_pair(x / 10, x % 10), std::make_pair(y / 10, y % 10));
    }

    bfs();
}
*/

/* 17086번 아기상어
//해설: bfs 문제. 왜 틀린지 모르겠음 자꾸 다른값이 나오는데 진짜 모르겠음.

int N, M;
int shark[50][50];
bool visited[50][50];

int ans = 0;

std::vector<std :: pair<int, int>> save;

int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void bfs(int a, int b)
{
    std::queue<std :: pair<std::pair<int, int>, int>> q;

    q.push(std::make_pair(std::make_pair(a, b), 0));
    visited[a][b] = true;

    while(!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int cnt = q.front().second;
        q.pop();

        if(shark[y][x] == 1)
        {
            ans = std::max(ans, cnt);
            return;
        }

        for(int i = 0 ; i < 8 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= 0 && nx >= 0 && ny < N && nx < M)
            {
                if(!visited[ny][nx])
                {
                    visited[ny][nx] = true;
                    q.push(std::make_pair(std::make_pair(ny, nx), cnt + 1));
                }
            }
        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin>>shark[i][j];

            if (shark[i][j] == 0)
            {
                save.emplace_back(std::make_pair(i,j));
            }
        }
    }

    for(int i = 0 ; i < save.size() ; i++)
    {
        std::memset(visited, false, 50);
        int y = save[i].first;
        int x = save[i].second;
        bfs(y, x);
    }

    printf("%d", ans);
}
*/