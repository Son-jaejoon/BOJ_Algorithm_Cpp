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

/* 18427번 함께 블록 쌓기
// 해설 : 배낭문제, 입력조건을 확실히 알아야함. getline함수
// url : https://www.acmicpc.net/problem/18427

int N, M, H;
vector<int> v[51];
vector<vector<int>> dp;

void input()
{
    cin >> N >> M >> H;
    
    cin.ignore(1);

    for(int i = 1 ; i <= N ; i++)
    {
        string st;
        getline(cin, st);

        int num = 0;

        for(int j = 0 ; j < st.size() ; j++)
        {
            if(st[j] == ' ')
            {
                v[i].emplace_back(num);
                num = 0;
            }
            else
            {
                num = num*10 + (st[j] - '0');
            }
        }

        if(num != 0)
            v[i].emplace_back(num);
    }
}

void solution()
{
    dp.assign(N + 1, vector<int>(H + 1, 0));

    for(int i = 0 ; i <= N ; i++)
    {
        dp[i][0] = 1;
    }

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= H ; j++)
        {
            for(int k = 0 ; k < v[i].size() ; k++)
            {
                if(j - v[i][k] >= 0)
                {
                    dp[i][j] += dp[i - 1][j - v[i][k]];
                    dp[i][j] %= 10007;
                }
            }

            dp[i][j] += dp[i - 1][j];
            dp[i][j] %= 10007;
        }
    }

    cout << dp[N][H];
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