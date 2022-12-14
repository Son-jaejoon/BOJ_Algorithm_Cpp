#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#define endl "\n"

using namespace std;

/* 2579번 계단 오르기
// 해설 : DP

int N, answer;
vector<int> stair;
vector<vector<int>> dp;

void input()
{
    cin >> N;

    int score = 0;
    
    for(int i = 0 ; i < N ; i++)
    {
        cin >> score;
        stair.emplace_back(score);
    }
}

void down_to_stair(int idx, int cnt, int score)
{
    if(idx == -1)
    {
        answer = max(answer, score);
        return;
    }

    if(cnt > 2 || cnt <= 0)
    {
        down_to_stair(idx - 1, 1, score);
    }
    else
    {
        if(dp[idx][cnt] < score + stair[idx])
        {
            dp[idx][cnt] = score + stair[idx];
            down_to_stair(idx - 1, cnt + 1, dp[idx][cnt]);
            down_to_stair(idx - 1, 0, dp[idx][cnt]);
        }
    }
}

void solution()
{
    dp.assign(N, vector<int>(3, 0));

    down_to_stair(N - 1, 1, 0);

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