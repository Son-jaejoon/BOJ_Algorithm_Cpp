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

/* 11568번 민균이의 계략
// 해설 : 가장 긴 증가하는 수열
// url : https://www.acmicpc.net/problem/11568

int N, answer = 1;
vector<int> v, dp;

void input()
{
    cin >> N;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    dp.assign(N, 1);

    for(int i = 1 ; i < N ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(v[j] < v[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }

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