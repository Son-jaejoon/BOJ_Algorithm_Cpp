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

/* 1699번 제곱수의 합
// 해설 : DP, 이전에 풀었던 것 같은데 어떤 문제인지 기억이 안나네
// url : https://www.acmicpc.net/problem/1699

int N;
vector<int> dp;

void input()
{
    cin >> N;
}

void solution()
{
    dp.assign(N + 1, 0);

    for(int i = 1 ; i <= N ; i++)
    {
        dp[i] = i;

        for(int j = 1 ; j*j <= i ; j++)
        {
            dp[i] = min(dp[i], dp[i - j*j] + 1);
        }
    }

    cout << dp[N];
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