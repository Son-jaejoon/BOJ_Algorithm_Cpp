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

/* 15664번 N과 M(10)
// 해설 : 백트랙킹
// url : https://www.acmicpc.net/problem/15664

int N, M;
vector<bool> visited;
vector<int> v;
vector<int> answer;
set<vector<int>> s;

void input()
{
    cin >> N >> M;

    v.assign(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
}

void dfs(int cnt)
{
    if (cnt == M)
    {
        s.insert(answer);
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (visited[i])
            continue;

        if (!answer.empty() && answer.back() > v[i])
            continue;

        visited[i] = true;
        answer.emplace_back(v[i]);
        dfs(cnt + 1);
        visited[i] = false;
        answer.pop_back();
    }
}

void solution()
{
    sort(v.begin(), v.end());
    visited.assign(N, false);
    dfs(0);

    for (auto ans : s)
    {
        for (int i = 0 ; i < ans.size() ; i++)
        {
            cout << ans[i] << " ";
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