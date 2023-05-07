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

/* 11057번 오르막 수 
// 해설 : DP
// url : https://www.acmicpc.net/problem/11057

int N;
vector<vector<int>> dp;

void input()
{
    cin >> N;
}

void solution()
{
    int answer = 0;
    dp.assign(N + 1, vector<int>(10, 0));

    for(int i = 0 ; i < 10 ; i++)
    {
        dp[1][i] = 1;
    }

    for(int i = 2 ; i<= N ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            if(j == 0)
            {
                dp[i][j] = 1;
                continue;
            }

            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]);
            dp[i][j] %= 10007;
        }
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        answer += dp[N][i];
    }

    cout << answer;
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