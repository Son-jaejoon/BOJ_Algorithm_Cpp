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

/* 11400번 단절선
// 해설 : 단절점, 단절선, dfs
// 참고 : https://www.crocus.co.kr/1164
// url : https://www.acmicpc.net/problem/11400

int V, E;
vector<int> edge[100001];
int visited[100001];

set<pair<int, int>> answer;

void input()
{
    cin >> V >> E;

    for(int i = 0 ; i < E ; i++)
    {
        int node_first, node_second;
        cin >> node_first >> node_second;

        edge[node_first].emplace_back(node_second);
        edge[node_second].emplace_back(node_first);
    }
}

void setting()
{
    for(int i = 1 ; i <= V ; i++)
    {
        sort(edge[i].begin(), edge[i].end());
    }
}

int dfs(int parent, int curr, int order)
{
    int res = order;
    visited[curr] = order;

    for(int i = 0 ; i < edge[curr].size() ; i++)
    {
        int next = edge[curr][i];

        if(next == parent)
            continue;
        
        if(!visited[next])
        {
            int next_order = dfs(curr, next, order + 1);

            if(next_order > visited[curr])
            {
                int first = min(curr, next);
                int second = max(curr, next);

                answer.insert(make_pair(first, second));
            }

            res = min(res, next_order);
        }
        else
            res = min(res, visited[next]);
    }

    return res;
}

void print_answer()
{
    cout << answer.size() << endl;

    for(auto result : answer)
    {
        cout << result.first << " " << result.second << endl;
    }
}

void solution()
{
    setting();

    for(int i = 1 ; i <= V ; i++)
    {
        if(!visited[i])
            dfs(0, i, 1);
    }

    print_answer();
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