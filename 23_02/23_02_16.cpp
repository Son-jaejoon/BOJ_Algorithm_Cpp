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

/* 10653번 마라톤 2
// 해설 : dp
// url : https://www.acmicpc.net/problem/10653

int N, K;
vector<pair<int, int>> v;
vector<vector<int>> dp;
vector<vector<int>> dist;

void input()
{
    cin >> N >> K;

    for(int i = 0 ; i < N ; i++)
    {
        int y, x;

        cin >> y >> x;

        v.emplace_back(make_pair(y, x));
    }
}

int solve(int idx, int k)
{
    if(idx == 1)
        return 0;
    
    if(dp[idx][k] != -1)
        return dp[idx][k];

    int min_num = 987654321;

    for(int i = 0 ; i <= k ; i++)
    {
        if(idx - i - 1 < 1)
            break;
        
        min_num = min(min_num, solve(idx - i - 1, k - i) + dist[idx - i - 1][idx]);
    }

    return dp[idx][k] = min_num;
}

void solution()
{
    dp.assign(N + 1, vector<int>(N + 1, -1));
    dist.assign(N + 1, vector<int>(N + 1, 0));

    for(int i = 0 ; i < N - 1 ; i++)
    {
        for(int j = i + 1 ; j <= N - 1 ; j++)
        {
            dist[i + 1][j + 1] = abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
        }
    }

    cout << solve(N, K);
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