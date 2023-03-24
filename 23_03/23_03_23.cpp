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

/* 11722번 가장 긴 감소하는 부분 수열
// 해설 : DP
// url : https://www.acmicpc.net/problem/11722

int N;
vector<int> v;

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
    int answer = 0;
    vector<int> dp;
    dp.assign(N, 1);

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(v[j] > v[i])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }

        answer = max(dp[i], answer);
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