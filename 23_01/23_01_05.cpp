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

/* 1389번 케빈 베이컨의 6단계 법칙
// 해설 : BFS
// url : https://www.acmicpc.net/problem/1389

int N, M;
vector<int> relationship[101];

void input()
{
    cin >> N >> M;

    for(int i = 0 ; i < M ; i++)
    {
        int a, b;

        cin >> a >> b;
        relationship[a].emplace_back(b);
        relationship[b].emplace_back(a);
    }
}

int kevin_bacon(int idx)
{
    vector<bool> visited;
    visited.assign(N + 1, false);
    visited[idx] = true;

    int result = 0;

    queue<pair<int, int>> q;
    q.emplace(make_pair(idx, 0));

    while(!q.empty())
    {
        int curr = q.front().first;
        int sum = q.front().second;
        q.pop();

        for(int i = 0 ; i < relationship[curr].size() ; i++)
        {
            int next = relationship[curr][i];
            
            if(visited[next])
                continue;

            visited[next] = true;
            result = result + sum + 1;
            q.emplace(make_pair(next, sum + 1));
        }
    }
    return result;
}

void solution()
{
    vector<int> result;

    for(int i = 1 ; i <= N ; i++)
    {
        int num = kevin_bacon(i);
        result.emplace_back(num);
    }

    int answer = 1;
    int bacon_result = result[0];

    for(int i = 1 ; i < result.size() ; i++)
    {
        int num = result[i];
        if(bacon_result > num)
        {
            answer = i + 1;
            bacon_result = num;
        }
    }

    cout << answer;
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