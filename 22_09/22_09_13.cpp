#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2252번 줄 세우기
// 해설 : 위상정렬의 기본
// 참고 : https://m42-orion.tistory.com/65

int N, M;
vector<int> seq;
vector<vector<int>> graph;
queue<int> q;

void solution()
{
    for(int i = 1 ; i <= N ; i++)
    {
        if(seq[i] == 0)
            q.emplace(i);
    }

    for(int i = 0 ; i < N ; i++)
    {
        int cur = q.front();
        q.pop();

        cout << cur << " ";

        for(int j = 0 ; j < graph[cur].size(); j++)
        {
            int next = graph[cur][j];
            if(--seq[next] == 0)
                q.push(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    seq.assign(N + 1, 0);
    graph.assign(N + 1, vector<int>(0, 0));

    for(int i = 0 ; i < M ; i++)
    {
        int A, B;
        cin >> A >> B;
        graph[A].emplace_back(B);
        seq[B]++;    
    }

    solution();
}
*/