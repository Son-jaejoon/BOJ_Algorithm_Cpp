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

/* 1309번 동물원
// 해설 : DP
// url : https://www.acmicpc.net/problem/1309

int N;
vector<vector<int>> dp;

void input()
{
    cin >> N;
}

void solution()
{
    dp.assign(N + 1, vector<int>(3, 0));
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;

    for(int i = 2 ; i <= N ; i++)
    {
        dp[i][0] = (dp[i - 1][1] + dp[i - 1][2]) % 9901 ;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % 9901;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 9901;
    }

    cout << (dp[N][0] + dp[N][1] + dp[N][2]) % 9901 << endl;
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