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

/* 15591번 MooTube(silver)
// 해설 : BFS, 문제의 내용이 이해하는데 다소 어려웠음.
// url : https://www.acmicpc.net/problem/15591

int N, Q;
vector<pair<int, long long>> v[5001];
vector<pair<int, int>> result;

void input()
{
    cin >> N >> Q;

    for(int i = 1 ; i < N ; i++)
    {
        int a, b;
        long long cost;

        cin >> a >> b >> cost;
        v[a].emplace_back(make_pair(b, cost));
        v[b].emplace_back(make_pair(a, cost));
    }

    for(int i = 0 ; i < Q ; i++)
    {
        long long a;
        int b;
        cin >> a >> b;
        result.emplace_back(make_pair(a, b));
    }
}

int find_video(int curr_idx, long long k)
{
    int result = 0;
    vector<bool> visited(N + 1, false);
    visited[curr_idx] = true;

    queue<pair<int, long long>> q;
    q.emplace(make_pair(curr_idx, k));
    
    while(!q.empty())
    {
        int curr = q.front().first;
        int cost = q.front().second;
        q.pop();

        for(int i = 0 ; i < v[curr].size() ; i++)
        {
            int next = v[curr][i].first;
            int next_cost = v[curr][i].second;

            if(visited[next])
                continue;
            
            if(next_cost < k)
                continue;
            
            visited[next] = true;
            result++;
            q.emplace(make_pair(next, next_cost));
        }
    }

    return result;
}

void solution()
{
    int idx = 0;

    while(idx < Q)
    {
        long long k = result[idx].first;
        int video_idx = result[idx].second;

        int answer = 0;

        answer = find_video(video_idx, k);
        cout << answer << endl;
        idx++;
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