#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>

/* 13913번 숨바꼭질 4
//해설 : 숨박꼭질 1의 연장으로 배열을 통해 값을 저장한 후 해당 값을 역순으로 찾는 방식.
int N, K;
int ans = 0;

std::queue<std::pair<int,int>> q;
int graph[100001];
std::vector<int> load;

bool visit[100010];

int bfs()
{
    while(!q.empty())
    {
        int locate = q.front().first;
        int cost = q.front().second;
        q.pop();

        if(locate == K)
        {
            ans = cost;
            int idx = locate;
        
            while(idx != N)
            {
                load.emplace_back(idx);
                idx = graph[idx];
            }
            load.emplace_back(N);
            return ans;
        }

        int x_1 = locate - 1;
        int x_2 = locate + 1;
        int x_3 = locate * 2;

        if(0 <= x_1 && !visit[x_1])
        {
            visit[x_1] = true;
            q.emplace(std::make_pair(x_1, cost + 1));
            graph[x_1] = locate;
        }

        if(x_2 <= K && !visit[x_2])
        {
            visit[x_2] = true;
            q.emplace(std::make_pair(x_2, cost + 1));
            graph[x_2] = locate;
        }

        if(x_3 <= K+1 && !visit[x_3])
        {
            visit[x_3] = true;
            q.emplace(std::make_pair(x_3, cost + 1));
            graph[x_3] = locate;
        }
    }

    return 0;
}

int main()
{
    scanf("%d %d", &N, &K);

    q.emplace(std::make_pair(N, 0));

    printf("%d\n", bfs());

    for(int i = load.size() - 1 ; i >= 0 ; i--)
    {
        printf("%d ", load[i]);
    }
}
*/

/* 1697번 숨바꼭질
//해설: BFS를 사용하는 문제. 상위의 값을 기준으로 값을 더하거나 빼고 곱한 다음 해당 값을 큐에 넣는다.
//만약 해당 값이 방문이 되어있는 상태라면 이미 뒤에서 생성이 되기때문에 중복생성을 막을 수 있다.

int N, K;
int ans = 0;
std::queue<std::pair<int, int>> q;
bool isChk[100010];

int bfs()
{
    while(!q.empty())
    {
        int locate = q.front().first;
        int cost = q.front().second;
        q.pop();

        if(locate == K)
        {
            ans = cost;
            return ans;
        }

         int x_1 = locate - 1;
         int x_2 = locate + 1;
         int x_3 = locate * 2;

         if(0 <= x_1 && !isChk[x_1])
         {
            isChk[x_1] = true;
            q.emplace(std::make_pair(x_1, cost + 1));
         }

         if(x_2 <= K && !isChk[x_2])
         {
            isChk[x_2] = true;
            q.emplace(std::make_pair(x_2, cost + 1));
         }

         if(x_3<= K+1 && !isChk[x_3])
         {
            isChk[x_3] = true;
            q.emplace(std::make_pair(x_3, cost + 1));
         }         
    }

    return 0;
}

int main()
{
    //걸으면 +1 or -1 한번 이동시 둘다 1초
    //순간이동 하면 2*X

    scanf("%d %d", &N, &K);

    q.emplace(std::make_pair(N, 0));

    printf("%d\n", bfs());
}
*/