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

/* 2302¹ø ±ØÀå ÁÂ¼®
// ÇØ¼³ : dp
// url : https://www.acmicpc.net/problem/2302

int N, M;
long long answer;
vector<int> vip, dp;

void input()
{
    cin >> N >> M;
    dp.assign(N + 1, 0);
    vip.assign(M, 0);

    for(int i = 0 ; i < M ; i++)
        cin >> vip[i];

}
void solution()
{
    long long answer = 1;

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3 ; i <= N ; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    int vip_cnt = 0;

    for(int i = 0 ; i < M ; i++)
    {
        int normal_cnt = vip[i] - vip_cnt - 1;
        answer *= dp[normal_cnt];
        vip_cnt = vip[i];
    }
    
    answer *= dp[N - vip_cnt];

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