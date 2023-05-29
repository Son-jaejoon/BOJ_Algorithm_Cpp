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

/* 2688번 줄어들지 않아
// 해설 : DP
// url : https://www.acmicpc.net/problem/2688

long long dp[66][10];

void setting()
{
    for(int i = 0 ; i <= 9 ; i++)
    {
        dp[1][i] = 1;
    }

    for(int i = 2 ; i <= 64 ; i++)
    {
        for(int j = 0 ; j <= 9 ; j++)
        {
            for(int k = 0 ; k <= j ; k++)
            {
                dp[i][j] += dp[i - 1][k];
            }
        }
    }
}

void input()
{
    int T, N;
    long long sum;

    cin >> T;
    
    setting();

    while(T--)
    {
        cin >> N;
        
        sum = 0;

        for(int i = 0 ; i <= 9 ; i++)
        {
            sum += dp[N][i];
        }

        cout << sum << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/