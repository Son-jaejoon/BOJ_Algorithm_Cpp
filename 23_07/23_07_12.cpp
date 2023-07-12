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

/* 2565번 전깃줄
// 해설 : DP
// url : https://www.acmicpc.net/problem/2565

int N;
vector<pair<int, int>> lines;

void input()
{
    cin >> N;

    lines.assign(N, make_pair(0, 0));

    for(int i = 0 ; i < N ; i++)
    {
        cin >> lines[i].first >> lines[i].second;
    }
}

void solution()
{
    sort(lines.begin(), lines.end());

    vector<int> dp(N, 0);
    int cnt = 0;

    for(int i = 0 ; i < N ; i++)
    {
        dp[i] = 1;

        for(int j = 0 ; j < i ; j++)
        {
            if(lines[j].second < lines[i].second)
                dp[i] = max(dp[i], dp[j] + 1);
        }

        cnt = max(cnt, dp[i]);
    }

    cout << N - cnt;
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