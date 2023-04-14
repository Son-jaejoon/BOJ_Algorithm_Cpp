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

/* 1535번 안녕
// 해설 : 배낭문제 or 브루트 포스
// url : https://www.acmicpc.net/problem/1535

int N, answer;
vector<int> L, J;
vector<vector<int>> dp;

void input()
{
    cin >> N;
    L.assign(N + 1, 0);
    J.assign(N + 1, 0);

    for(int i = 1 ; i <= N ;i++)
    {
        cin >> L[i];
    }

    for(int i = 1 ; i <= N ; i++)
    {
        cin >> J[i];
    }
}


void solution()
{
    dp.assign(N + 1, vector<int>(101, 0));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int hp = 100 ; hp > 0 ; hp--)
        {
            if(hp - L[i] > 0)
            {
                dp[i][hp] = max(dp[i - 1][hp], dp[i - 1][hp - L[i]] + J[i]);
            }
            else
                dp[i][hp] = max(dp[i][hp], dp[i - 1][hp]); 

            answer = max(answer, dp[i][hp]);
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