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

/* 14496번 그대, 그머가 되어
// 해설 : BFS
// url : https://www.acmicpc.net/problem/14496

int a, b, N, M;
vector<int> v[1001];
vector<int> visited;

void input()
{
    cin >> a >> b >> N >> M;

    int base_num, change_num;

    for(int i = 0 ; i < M ; i++)
    {
        cin >> base_num >> change_num;

        v[base_num].emplace_back(change_num);
        v[change_num].emplace_back(base_num);
    }
}

void solution()
{
    visited.assign(N + 1, 987654321);

    queue<pair<int, int>> q;
    q.emplace(make_pair(a, 0));
    visited[a] = 0;

    while(!q.empty())
    {
        int curr_num = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if(curr_num == b)
        {
            continue;
        }

        for(int i = 0 ; i < v[curr_num].size() ; i++)
        {
            int next_num = v[curr_num][i];
            
            if(visited[next_num] <= cnt + 1)
                continue;
            
            visited[next_num] = cnt + 1;
            q.emplace(make_pair(next_num, cnt + 1));
        }
    }

    if(visited[b] == 987654321)
        visited[b] = -1;

    cout << visited[b] << endl;
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