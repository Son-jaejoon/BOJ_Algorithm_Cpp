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

/* 12761번 돌다리
// 해설 : BFS
// url : https://www.acmicpc.net/problem/12761

int A, B, N, M;
vector<int> v;

void input()
{
    cin >> A >> B >> N >> M;
}

void bfs()
{
    int move[] = {-1, 1, -A, A, -B, B};
    queue<pair<int, int>> q;
    v[N] = 0;
    q.emplace(make_pair(N, 0));

    while (!q.empty())
    {
        int curr_idx = q.front().first;
        int cnt = q.front().second;
        q.pop();

        for (int dir = 0; dir < 6; dir++)
        {
            int next_idx = curr_idx + move[dir];

            if (next_idx < 0 || next_idx > 100000 || next_idx >= v.size())
                continue;

            if (v[next_idx] != -1 && v[next_idx] <= cnt + 1)
                continue;

            v[next_idx] = cnt + 1;
            q.emplace(make_pair(next_idx, cnt + 1));
        }

        int next_idx = curr_idx * A;
        
        if (next_idx >= 0 && next_idx <= 100000 && next_idx < v.size() && (v[next_idx] == -1 || v[next_idx] > cnt + 1))
        {
            v[next_idx] = cnt + 1;
            q.emplace(make_pair(next_idx, cnt + 1));
        }

        next_idx = curr_idx * B;

        if (next_idx >= 0 && next_idx <= 100000 && next_idx < v.size() && (v[next_idx] == -1 || v[next_idx] > cnt + 1))
        {
            v[next_idx] = cnt + 1;
            q.emplace(make_pair(next_idx, cnt + 1));
        }
    }
}

void solution()
{
    v.assign(max(N, M) * 2 + 1, -1);
    bfs();
    cout << v[M];
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