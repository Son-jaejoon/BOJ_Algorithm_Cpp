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

/* 1890번 점프
// 해설 : DP
// url : https://www.acmicpc.net/problem/1890

int N;
vector<vector<int>> board;
vector<vector<long long>> dp;
vector<vector<bool>> visit;

void input()
{
    cin >> N;
    board.assign(N, vector<int>(N, 0));
    dp.assign(N, vector<long long>(N, 0));
    visit.assign(N, vector<bool>(N, false));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> board[i][j];
        }
    }
}

void solution()
{
    long long answer = 0;
    dp[0][0] = 1;
    visit[0][0] = true;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if(!visit[i][j])
                continue;
            
            if(board[i][j] == 0)
                continue;

            if(i + board[i][j] < N)
            {
                visit[i + board[i][j]][j] = true;
                dp[i + board[i][j]][j] += dp[i][j];
            }

            if(j + board[i][j] < N)
            {
                visit[i][j + board[i][j]] = true;
                dp[i][j + board[i][j]] += dp[i][j];
            }    
        }
    }

    cout << dp[N - 1][N - 1];
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