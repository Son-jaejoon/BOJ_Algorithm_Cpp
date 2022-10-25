#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

/* 16940번 BFS 스페셜 저지
// 해설 : DFS 스페셜 저지와 같음.
// 참고 : https://astrid-dm.tistory.com/383

int n, a, b, pos;
std::vector<int> v[100001];
std::queue<int> order;
int bfs_order[100001];

bool comp(const int& a, const int& b) 
{
    return bfs_order[a] < bfs_order[b];
}

int main()
{
    scanf("%d", &n);

    for(int i = 0 ; i < n - 1 ; i++)
    {
        scanf("%d %d", &a, &b);
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }

    for(int i = 1 ; i <= n ; i++)
    {
        scanf("%d", &a);
        order.emplace(a);
        bfs_order[a] = i;
    }

    for(int i = 1; i <= n ; i++)
    {
        std::sort(v[i].begin(), v[i].end(), comp);
    }

    if(order.front() != 1)
    {
        printf("0");
        exit(0);
    }else
    {
        std::queue<int> temp;
        temp.emplace(1);
        order.pop();

        while(!temp.empty())
        {
            pos = temp.front();
            temp.pop();

            for(auto i : v[pos])
            {
                if(i == order.front())
                {
                    temp.push(order.front());
                    order.pop();
                }
            }
        }
    }

    if(order.empty())
        printf("1");
    else
        printf("0");

}
*/

/* 16964번 DFS 스페셜 저지
//해설: 해당 값을 좌우로 비교한 후 정렬 하고 시작 값이 1이 아니면 바로 false를 주고 그렇지 않으면 1부터 비교
//왜 틀린지 모르겠다.
// 참고 : https://astrid-dm.tistory.com/384
// 해당 자료로 제출했지만 둘다 이해는 함. 내 코드는 왜 틀린지 모르겠음.(07.29)

int N;
std::vector<int> graph[100001];
std::queue<int> q1;
std::queue<int> q2;
std::queue<int> ans1;
std::queue<int> ans2;
bool visited1[100001];
bool visited2[100001];


void dfs_front(int num)
{
    visited1[num] = true;

    for(int i = 0 ; i < graph[num].size() ; i++)
    {
        if(visited1[graph[num][i]])
            continue;
        else
        {
            visited1[graph[num][i]] = true;
            ans1.emplace(graph[num][i]);
            dfs_front(graph[num][i]);
        }
    }

    return;
}

void dfs_back(int num)
{
    visited2[num] = true;

    for(int i = graph[num].size() - 1 ; i >= 0 ; i--)
    {
        if(visited2[graph[num][i]])
            continue;
        else
        {
            visited2[graph[num][i]] = true;
            ans2.emplace(graph[num][i]);
            dfs_back(graph[num][i]);
        }
    }

    return;
}

int main()
{
    scanf("%d", &N);

    for(int i = 0 ; i < N-1 ; i++)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        graph[num1].emplace_back(num2);
        graph[num2].emplace_back(num1);
    }

    for(int i = 0 ; i < N ; i++)
    {
        int num;
        scanf("%d", &num);
        q1.emplace(num);
        q2.emplace(num);
    }

    ans1.emplace(1);
    ans2.emplace(1);
    dfs_front(1);
    dfs_back(1);

    for(int i = 0 ; i < N ; i++)
    {
        int num1 = q1.front();
        int num2 = ans1.front();

        if(num1 != num2)
        {
            break;
        }else if(i == N-1)
        {
            printf("1");
            exit(0);
        }

        q1.pop();
        ans1.pop();
    }

    for(int i = 0 ; i < N ; i++)
    {
        int num1 = q2.front();
        int num2 = ans2.front();

        if(num1 != num2)
        {
            printf("0");
            exit(0);
        }else if(i == N-1)
        {
            printf("1");
            exit(0);
        }

        q2.pop();
        ans2.pop();
    }
}
*/

/* 16947번 서울 지하철 2호선
//해설 : 양방향 그래프 첫 문제. 이해를 위해 한번 더 봐야할 듯
// dfs - 방문 했다면 이전의 값이 직전의 부모 노드가 아니면 순환이라고 체크하고 다시 역으로 돌림
// bfs - 순환선을 중심으로 역으로 + 1 씩 큐에 추가하며 거리를 잰다.
// 참고 : https://ongveloper.tistory.com/276

#define MAX 3001

int N;
std::vector<int> graph[MAX];
bool cycle[MAX];
bool visited[MAX];
int pre[MAX];
bool hasCycle;
int dist[MAX];

void bfs()
{
    std::queue<std::pair<int, int>> q;

    for(int i = 1; i <= N ; i++)
    {
        if(cycle[i])
        {
            visited[i] = true;
            q.push({i, 0});
        }
    }

    while(!q.empty())
    {
        int cur = q.front().first;
        int dis = q.front().second;
        q.pop();
        visited[cur] = true;

        for(int i = 0; i < graph[cur].size() ; i++)
        {
            int next = graph[cur][i];
            if(visited[next])
                continue;
            
            dist[next] = dis + 1;
            q.push({next, dis + 1});
        }
    }
}

void findCycle(int cur)
{
    visited[cur] = true;

    for(int i = 0 ; i < graph[cur].size() ; i++)
    {
        if(hasCycle)
            return;
        
        int next = graph[cur][i];
        if(visited[next])
        {
            if(next != pre[cur])
            {
                cycle[cur] = true;
                hasCycle = true;
                while(cur != next)
                {
                    cycle[pre[cur]] = true;
                    cur = pre[cur];
                }
                return;
            }
        }else
        {
            pre[next] = cur;
            findCycle(next);
        }
    }
}

int main()
{
    scanf("%d", &N);

    for(int i = 0 ; i < N ; i++)
    {
        int num1;
        int num2;
        scanf("%d %d", &num1, &num2);

        graph[num1].emplace_back(num2);
        graph[num2].emplace_back(num1);
    }

    findCycle(0);
    std::memset(visited, false, MAX);
    bfs();

    for(int i = 1 ; i <= N ; i++)
    {
        printf("%d ", dist[i]);
    }
}
*/