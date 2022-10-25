#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

/* 1707번 이분 그래프
//해설 : 이분 그래프란 전체의 정점을 2개의 그룹으로 나누어 2개의 그룹 사이에서만 간선이 존재하는 경우를 뜻한다.
//해당 그래프를 판별하기 위해선 DFS를 통해 기준 정점과 자식 정점의 색깔을 반대로 설정해 준 후
//모든 경우를 for을 통해 부모 자식 간의 관계의 색이 같으면 NO, 다르면 YES가 된다.

#define RED 2
#define BLUE 3

int k; // 케이스 개수
int v; // 케이스 정점의 수
int e; // 케이스 간선의 수

std::vector<int> graph[20001];
int visited[20001];

void dfs(int start)
{
    if(visited[start] == 0)
        visited[start] = RED;

    for(int i = 0 ; i < graph[start].size(); i++)
    {
        int idx = graph[start][i];

        if(visited[idx] == 0)
        {
            if(visited[start] == RED)
                visited[idx] = BLUE;
            else if(visited[start] == BLUE)
                visited[idx] = RED;

            dfs(idx);
        }
    }
}

int check()
{
    for (int i = 1 ; i <= v ; i++)
    {
        for(int j = 0 ; j < graph[i].size() ; j++)
        {
            int idx = graph[i][j];

            if(visited[i] == visited[idx])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    scanf("%d", &k);

    while(k > 0)
    {
        scanf("%d %d", &v, &e);

        for(int i = 0 ; i < e; i++)
        {
            int num1, num2;
            scanf("%d %d", &num1, &num2);
            graph[num1].push_back(num2);
            graph[num2].push_back(num1);
        }
        
        for(int i = 1 ; i <= v; i++)
        {
            if(visited[i] == 0)
                dfs(i);
        }

        if(check() == 0)
            printf("NO\n");
        else
            printf("YES\n");


        std::memset(visited, 0, sizeof(visited));
        std::memset(graph, 0 , sizeof(graph));
        k--;
    }
}
*/

/* 7576번 토마토
//해설 : 너비우선탐색을 통한 문제. 큐를 통해 x,y 좌표를 받고 좌표를 기준으로 상하좌우를 평가한다.
//       존재한다면 if 문을 통해 문제 해결.

bool isInside(int ny, int nx, int a, int b)
{
    if(0 <= nx && 0 <= ny && ny < a && nx < b)
    {
        return true;
    }else
        return false;
}

int main()
{
    int ans = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int M;
    int N;

    scanf("%d %d", &M, &N);

    int arr[N][M];
    std::queue<std::pair<int, int>> tomato;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 1)
            {
                tomato.push(std::make_pair(i, j));
            }
        }
    }

    while (!tomato.empty())
    {
        int y = tomato.front().first;
        int x = tomato.front().second;
        tomato.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(isInside(ny, nx, N, M) && arr[ny][nx] == 0)
            {
                arr[ny][nx] = arr[y][x] + 1;
                tomato.push(std::make_pair(ny, nx));
            }
        }
    }

    for(int i = 0 ; i < N ; i ++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(arr[i][j] == 0)
            {
                printf("-1\n");
                return 0;
            }

            if(ans < arr[i][j])
            {
                ans = arr[i][j];
            }
        }
    }

    printf("%d\n", ans - 1);
}
*/