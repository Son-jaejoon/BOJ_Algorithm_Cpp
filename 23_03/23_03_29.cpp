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

/* 1965번 상자넣기
// 해설 : DP, 가장 긴 증가하는 수열
// url : https://www.acmicpc.net/problem/1965

int N;

vector<int> v;
vector<int> dp;

void input()
{
    cin >> N;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
        cin >> v[i];
}

void solution()
{
    int answer = 0;

    dp.assign(N, 1);

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(v[j] < v[i])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
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