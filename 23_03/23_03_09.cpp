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

/* 17626번 Four Squares
// 해설 : DP, 생각차이
// url : https://www.acmicpc.net/problem/17626

int N;
vector<int> dp;

void input()
{
    cin >> N;
}

void solution()
{
    dp.assign(N + 1, 0);
    dp[1] = 1;

    for(int i = 2 ; i <= N ; i++)
    {
        int min_num = 987654321;

        for(int j = 1 ; j * j <= i ; j++)
        {
            int tmp = i - j * j;
            min_num = min(min_num, dp[tmp]);
        }

        dp[i] = min_num + 1;
    }

    cout << dp[N];
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