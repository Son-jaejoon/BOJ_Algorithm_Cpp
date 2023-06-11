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

/* 12849번 본대 산책
// 해설 : DP
// url : https://www.acmicpc.net/problem/12849

int D;

void input()
{
    cin >> D;
}

void solution()
{
    long long dp[8] = {0, }, next[8] = {0, };
    dp[0] = 1;

    while(D--)
    {
        next[0] = dp[1] + dp[3];
        next[1] = dp[0] + dp[2] + dp[3]; 
        next[2] = dp[1] + dp[3] + dp[4] + dp[5];
        next[3] = dp[0] + dp[1] + dp[2] + dp[5];
        next[4] = dp[2] + dp[5] + dp[6];
        next[5] = dp[2] + dp[3] + dp[4] + dp[7];
        next[6] = dp[4] + dp[7];
        next[7] = dp[5] + dp[6];

        for(int i = 0 ; i < 8 ; i++)
        {
            dp[i] = next[i] % 1000000007;
        }
    }

    cout << dp[0];
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