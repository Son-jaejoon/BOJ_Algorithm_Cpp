#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 1516번 게임 개발
// 해설 : 위상 정렬, 연결되있을 때 값 더하기. max값으로 더한다(이유 : 선행 건물 + 내 건물 시간)

int N;
vector<int> inDegree;
vector<vector<int>> graph;
vector<int> cost;
vector<int> result;

void solution()
{
    queue<int> q;
    
    for(int i = 1 ; i <= N ; i++)
    {
        if(inDegree[i] == 0)
        {
            q.emplace(i);
            result[i] = cost[i];
        }
    }

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int j = 0 ; j < graph[cur].size() ; j++)
        {
            int next = graph[cur][j];
            result[next] = max(result[next], result[cur] + cost[next]);

            if(--inDegree[next] == 0)
                q.emplace(next);
        }
    }

    for(int i = 1 ; i <= N ; i++)
    {
        cout << result[i] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    inDegree.assign(N + 1, 0);
    graph.assign(N + 1, vector<int>(0, 0));
    cost.assign(N + 1, 0);
    result.assign(N + 1, 0);

    for(int i = 1 ; i <= N ; i++)
    {
        int time, prev, next;

        cin >> time >> prev;
        cost[i] = time;

        while(prev != -1)
        {
            graph[prev].emplace_back(i);
            inDegree[i]++;
            cin >> prev;
        }
    }

    solution();
}
*/

/* 2623번 음악프로그램
// 해설 : 위상정렬, prev, curr 설정
// 참고 : https://m42-orion.tistory.com/65

int N, M;
vector<int> inDegree;
vector<vector<int>> graph;
queue<int> q;

void solution()
{
    vector<int> save;

    for(int i = 1 ; i <= N ; i++)
    {
        if(inDegree[i] == 0)
            q.emplace(i);
    }

    for(int i = 0 ; i < N ; i++)
    {
        if(q.empty())
            break;
        int cur = q.front();
        q.pop();

        save.emplace_back(cur);

        for(int j = 0 ; j < graph[cur].size() ; j++)
        {
            int next = graph[cur][j];

            if(--inDegree[next] == 0)
                q.emplace(next);
        }
    }

    if(save.size() != N)
    {
        cout << 0;
        return;
    }
    else
    {
        for(int i = 0 ; i < save.size() ; i++)
        {
            cout << save[i] << endl;
        }
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    inDegree.assign(N + 1, 0);
    graph.assign(N + 1, vector<int>(0, 0));

    for(int i = 0 ; i < M ; i++)
    {
        int k, prev, curr;

        cin >> k;
        
        if(k == 0)
            continue;
        
        cin >> prev;

        for(int j = 1 ; j < k ; j++)
        {
            cin >> curr;
            graph[prev].emplace_back(curr);
            inDegree[curr]++;

            prev = curr;
        }
    }

    solution();
}
*/