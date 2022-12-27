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

/* 2606번 바이러스
// 해설 : BFS, 구현
// url : https://www.acmicpc.net/problem/2606

int N, answer;
vector<int> v[101];

void input()
{
    int cnt;
    cin >> N >> cnt;
    
    for(int i = 0 ; i < cnt ; i++)
    {
        int a, b;
        cin >> a >> b;

        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
}

void solution()
{
    queue<int> q;
    q.emplace(1);

    vector<bool> visited;
    visited.assign(N + 1, false);
    visited[1] = true;

    while(!q.empty())
    {
        int curr = q.front();
        answer++;
        q.pop();

        for(int i = 0 ; i < v[curr].size() ; i++)
        {
            int next = v[curr][i];

            if(visited[next])
                continue;
            
            visited[next] = true;
            q.emplace(next);
        }
    }

    cout << answer - 1 ; 
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