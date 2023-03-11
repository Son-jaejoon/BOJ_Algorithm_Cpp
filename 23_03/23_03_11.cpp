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

/* 1912번 연속합
// 해설 : DP
// url : https://www.acmicpc.net/problem/1912

int N;
vector<int> v, dp;

void input()
{
    cin >> N;
    v.assign(N, 0);
    dp.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
        dp[i] = v[i];
    }
}

void solution()
{
    int answer = v[0];

    for(int i = 1 ; i < N ; i++)
    {
        dp[i] = max(dp[i], dp[i] + dp[i - 1]);
        answer = max(answer, dp[i]);
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