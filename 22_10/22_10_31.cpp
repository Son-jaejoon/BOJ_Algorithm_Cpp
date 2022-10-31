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

/* 1562번 계단수
// 해설 : 비트마스킹, DP / 비트마스킹에 대한 이해를 더 해야겠다..
// 참고 : https://melonicedlatte.com/algorithm/2018/03/15/160637.html

#define mod 1000000000

int N;
int dp[101][10][1 << 10];

void solution()
{
    int full = (1 << 10) - 1;

    for(int i = 1 ; i <= 9 ; i++)
    {
        dp[1][i][1 << i] = 1;
    }

    for(int i = 2 ; i <= N ; i++)
    {
        for(int j = 0 ; j <= 9 ; j++)
        {
            for(int k = 0 ; k <= full ; k++)
            {
                if(j == 0)
                    dp[i][0][k | (1 << 0)] = (dp[i][0][k | (1 << 0)] + dp[i - 1][1][k]) % mod;
                else if(j == 9)
                    dp[i][9][k | (1 << 9)] = (dp[i][9][k | (1 << 9)] + dp[i - 1][8][k]) % mod;
                else
                {
                    dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j - 1][k]) % mod;
                    dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j + 1][k]) % mod;
                }
            }
        }
    }

    int ans = 0;
    for(int i = 0 ;  i <= 9 ; i++)
    {
        ans = (ans + dp[N][i][full]) % mod;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    solution();
}
*/