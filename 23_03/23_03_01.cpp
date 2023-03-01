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

/* 9461번 파도반 수열
// 해설 : DP
// url : https://www.acmicpc.net/problem/9461

long long dp[101] = {0, 1, 1, };

long long solution(int N)
{
    if(N < 3)
        return dp[N];
    else if(dp[N] == 0)
        dp[N] = solution(N - 2) + solution(N - 3);
    
    return dp[N];
}

void input()
{
    int T, N;

    cin >> T;

    while(T--)
    {
        cin >> N;
        cout << solution(N) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/