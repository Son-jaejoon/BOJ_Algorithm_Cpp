#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 5557번 1학년
// 해설 : 그냥 단순히 이전 값과 현재 값을 더하고 빼서 0~20 사이면 이전에 저장한 값에 + 1

int n;
long long dp[101][21];
int num[101];

void solution()
{
    long long ans;
    int target = num[n];

    dp[1][num[1]] = 1;

    for(int i = 2 ; i <= n-1; i++)
    {
        for(int j = 0 ; j <= 20 ; j++)
        {
            if(dp[i-1][j] == 0)
                continue;
            
            if(j + num[i] <= 20)
            {
                dp[i][j + num[i]] += dp[i - 1][j];
            }

            if(j - num[i] >= 0)
            {
                dp[i][j - num[i]] += dp[i-1][j];
            }
        }
    }

    ans = dp[n-1][target];
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1 ; i <= n ; i++)
    {
        cin >> num[i];
    }

    solution();
}
*/

/* 5582번 공통 부문 문자열
// 해설 : 이전 값에 + 1
// 참고 : https://gusdnr69.tistory.com/111

int dp[4001][4001];

string st1;
string st2;

void long_length()
{
    dp[0][0] = 0;
    int length = 0;

    for(int i = 0 ; i < st1.length() ; i++)
    {
        for(int j = 0 ; j < st2.length() ; j++)
        {
            if(st1[i] == st2[j])
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i-1][j-1] + 1;
                length = max(length, dp[i][j]);
            }
        }
    }
    cout << length;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> st1 >> st2;

    long_length();
}
*/