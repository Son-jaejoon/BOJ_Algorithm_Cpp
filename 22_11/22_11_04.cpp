#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2533번 사회망 서비스(SNS)
// 해설 : 처음에 보고 Union-find 인 줄 알았으나, DP였다..

int n, parent;

vector<vector<int>> e;
vector<vector<int>> dp; // 0이 어답터, 1이 일반인
vector<bool> visited;

void find(int x)
{
    visited[x] = true;
    dp[x][0] = 1;
    for (int i = 0; i < e[x].size(); i++)
    {
        int child = e[x][i];
        if (visited[child])
            continue;
        find(child);
        dp[x][1] += dp[child][0];
        dp[x][0] += min(dp[child][1], dp[child][0]);
    }
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    e.assign(n + 1, vector<int>(0, 0));
    dp.assign(n + 1, vector<int>(2, 0));
    visited.assign(n + 1, false);

    int u, v;
    
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    
    find(1);
    
    cout << min(dp[1][0], dp[1][1]);
}
*/