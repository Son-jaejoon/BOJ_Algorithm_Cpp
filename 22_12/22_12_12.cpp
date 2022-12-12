#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#define endl "\n"

using namespace std;

/* 1463번 1로 만들기
// 해설 : DP

int N, answer;
vector<int> dp;

void input()
{
    cin >> N;
    dp.assign(N + 1, 987654321);
}

void dfs(int N, int cnt)
{
    if(N == 1)
    {
        dp[N] = min(dp[N], cnt);
        return;
    }

    if(N % 3 == 0)
    {
        if(dp[N / 3] > cnt + 1)
        {
            dp[N / 3] = cnt + 1;
            dfs(N / 3, cnt + 1);
        }
    }

    if(N % 2 == 0)
    {
        if(dp[N / 2] > cnt + 1)
        {
            dp[N / 2] = cnt + 1;
            dfs(N / 2, cnt + 1);
        }
    }

    if(dp[N - 1] > cnt + 1)
    {
        dp[N - 1] = cnt + 1;
        dfs(N - 1, cnt + 1);
    }
}

void solution()
{
    dfs(N, 0);
    cout << dp[1];
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