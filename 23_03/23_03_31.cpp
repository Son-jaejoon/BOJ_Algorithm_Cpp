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

/* 18352번 특정 거리의 도시 찾기
// 해설 : bfs
// url : https://www.acmicpc.net/problem/18352

int N, M, K, X;
vector<int> v[300001];
vector<bool> visited;
vector<int> answer;

void input()
{
    cin >> N >> M >> K >> X;

    int start, end;

    for(int i = 0 ; i < M ; i++)
    {
        cin >> start >> end;
        v[start].emplace_back(end);
    }
}

void bfs()
{
    queue<pair<int, int>> q;
    visited[X] = true;
    q.emplace(make_pair(X, 0));

    while(!q.empty())
    {
        int curr_city = q.front().first;
        int dist = q.front().second;
        q.pop();

        if(dist == K)
        {
            answer.emplace_back(curr_city);
            continue;
        }

        for(int i = 0 ; i < v[curr_city].size() ; i++)
        {
            int next_city = v[curr_city][i];

            if(visited[next_city])
                continue;
            
            visited[next_city] = true;
            q.emplace(make_pair(next_city, dist + 1));
        }
    }
}

void print_answer()
{
    sort(answer.begin(), answer.end());

    if(answer.empty())
        cout << "-1";
    else
    {
        for(int ans : answer)
            cout << ans << endl;
    }
}

void solution()
{
    visited.assign(N + 1, false);
    bfs();
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