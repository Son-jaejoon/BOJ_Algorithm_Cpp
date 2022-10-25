#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <cstring>

/* 13023번 ABCDE
해설 : 연속된 친구관계를 찾는 것. 시작점으로 부터 깊이탐색을 해 깊이 관계가 4가 됫을때 return
int N;
std::vector<std::vector<int>> v(2001);
bool visit[2001];

bool ans = false;

void dfs(int k, int cur)
{
    if(k == 4)
    {
        ans = true;
        return;
    }

    for(int i = 0 ; i < v[cur].size(); i++)
    {
        int nxt = v[cur][i];
        if(visit[nxt])
            continue;
        visit[nxt] = 1;
        dfs(k + 1, nxt);
        visit[nxt] = 0;
    }
}

int main()
{
    int M;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < M ; i++)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        v[num1].push_back(num2);
        v[num2].push_back(num1);
    }

    for(int i = 0 ; i < N ; i++)
    {
        std::memset(visit, false, sizeof(visit));
        visit[i] = 1;
        dfs(0, i);
        if(ans)
            break;
    }

    if(ans)
        printf("1");
    else
        printf("0");
}
*/

/* 1260번 DFS와 BFS
헷갈릴 때 다시 한번 보자. 
1. https://velog.io/@ming/DFS-vs-BFS-%ED%83%90%EC%83%89
2. https://better-tomorrow.tistory.com/entry/DFS-BFS-%EC%9D%B4%ED%95%B4%ED%95%98%EA%B8%B0
bool visited[1001];
int graph[1001][1001];
std::queue<int> q;

int N;

void dfs(int x)
{
    visited[x] = true;
    printf("%d ", x);
    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == 0 && graph[x][i] == 1)
            dfs(i);
    }
}

void bfs(int x)
{
    q.push(x);
    visited[x] = true;
    printf("%d ", x);

    while (!q.empty())
    {
        x = q.front();
        q.pop();
        for (int i = 1; i <= N; i++)
        {
            if (visited[i] == 0 && graph[x][i] == 1)
            {
                q.push(i);
                visited[i] = true;
                printf("%d ", i);
            }
        }
    }
}

int main()
{
    int M;
    int V;

    scanf("%d %d %d", &N, &M, &V);

    for (int i = 0; i < M; i++)
    {
        int num1;
        int num2;

        scanf("%d %d", &num1, &num2);
        graph[num1][num2] = 1;
        graph[num2][num1] = 1;
    }

    std::memset(visited, false, sizeof(visited));
    dfs(V);

    printf("\n");

    std::memset(visited, false, sizeof(visited));
    bfs(V);
}
*/

/* 10845번 큐

int main()
{
    int N;
    scanf("%d", &N);

    std::queue<int> q;

    int num;
    std::string str = "";

    for(int i = 0 ; i < N ; i++)
    {
        std::cin>>str;

        if(str == "push")
        {
            scanf("%d\n", &num);
            q.push(num);
            continue;
        }

        if(str == "pop")
        {
            if(q.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", q.front());
                q.pop();
            }
            continue;
        }

        if(str == "size")
        {
            printf("%d\n", q.size());
            continue;
        }

        if(str == "empty")
        {
            printf("%d\n", q.empty() ? 1 : 0);
            continue;
        }

        if(str == "front")
        {
            if(q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.front());

            continue;
        }

        if(str == "back")
        {
            if(q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.back());

            continue;
        }
    }
}
*/