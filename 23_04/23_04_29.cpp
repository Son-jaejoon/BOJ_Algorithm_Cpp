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

/* 14430번 자원 캐기
// 해설 : DP
// url : https://www.acmicpc.net/problem/14430

int N, M;
vector<vector<int>> v, dp;

void input()
{
    cin >> N >> M;

    v.assign(N + 1, vector<int>(M + 1, 0));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= M ; j++)
        {
            cin >> v[i][j];
        }
    }
}

void solution()
{
    dp.assign(N + 1, vector<int>(M + 1, 0));

    int answer = 0;

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= M ; j++)
        {
            dp[i][j] = max(dp[i][j], dp[i - 1][j] + v[i][j]);
            dp[i][j] = max(dp[i][j], dp[i][j - 1] + v[i][j]);
            answer = max(answer, dp[i][j]);
        }
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