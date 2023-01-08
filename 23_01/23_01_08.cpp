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

/* 11051번 이항 계수 2
// 해설 : DP
// url : https://www.acmicpc.net/problem/11051

int N, K;
vector<vector<int>> dp;

void input()
{
    cin >> N >> K;
}

void solution()
{
    dp.assign(N + 1, vector<int>(N + 1, 0));

    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;

    for(int i = 2 ; i <= N ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            if(j == 0)
                dp[i][0] = 1;
            else if(j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
        }
    }

    cout << dp[N][K];
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