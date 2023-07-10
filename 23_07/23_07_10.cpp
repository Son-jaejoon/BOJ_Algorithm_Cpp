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

/* 2225번 합분해
// 해설 : 수학, DP
// url : https://www.acmicpc.net/problem/2225

int N, K;

void input()
{
    cin >> N >> K;
}

void solution()
{
    vector<vector<long long>> dp;
    dp.assign(K + 1, vector<long long>(N + 1, 0));

    for(int i = 0 ; i <= N ; i++)
    {
        dp[1][i] = 1;
    }

    for(int cnt = 2 ; cnt <= K ; cnt++)
    {
        for(int i = 0 ; i <= N ; i++)
        {
            for(int j = 0 ; j <= i ; j++)
            {
                dp[cnt][i] = dp[cnt][i] + dp[cnt - 1][j];
            }

            dp[cnt][i] %= 1000000000;
        }
    }

    cout << dp[K][N];
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