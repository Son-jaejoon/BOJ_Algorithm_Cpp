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

/* 11403번 경로 찾기
// 해설 : 그래프 탐색
// url : https://www.acmicpc.net/problem/11403

int N;
vector<vector<int>> v;
vector<int> road[100];

void input()
{
    cin >> N;
    v.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            int num;
            cin >> num;

            if(num == 1)
            {
                road[i].emplace_back(j);
            }
        }
    }
}

int can_go(int start_node, int end_node)
{
    queue<int> q;
    q.emplace(start_node);

    vector<bool> visited;
    visited.assign(N, false);
    visited[start_node] = true;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        for(int i = 0 ; i < road[curr].size() ; i++)
        {
            int next = road[curr][i];

            if(next == end_node)
                return 1;

            if(visited[next])
                continue;
            
            visited[next] = true;
            q.emplace(next);
        }
    }

    return 0;
}

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cout << can_go(i, j) << " ";
        }

        cout << endl;
    }
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