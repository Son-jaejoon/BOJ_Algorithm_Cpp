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
#define endl "\n"

using namespace std;

/* 11054번 가장 긴 바이토닉 부분 수열
// 해설 : LIS, LDS의 합 , 이분 탐색으로 효율성 늘리기

int N;
vector<int> v, dp , b_dp, lis;

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        if(i == 0)
            lis.emplace_back(v[i]);
        else
        {
            if(lis[lis.size() - 1] < v[i])
                lis.emplace_back(v[i]);
            else
                *lower_bound(lis.begin(), lis.end(), v[i]) = v[i];

            dp[i] = lis.size();
        }
    }

    lis.clear();

    for(int i = N - 1 ; i >= 0 ; i--)
    {
        if(i == N - 1)
            lis.emplace_back(v[i]);
        else
        {
            if(lis[lis.size() - 1] < v[i])
                lis.emplace_back(v[i]);
            else
                *lower_bound(lis.begin(), lis.end(), v[i]) = v[i];
            
            b_dp[i] = lis.size();
        }
    }

    int ans = 0;

    for(int i = 0 ; i < N ; i++)
    {
        ans = max(ans, dp[i] + b_dp[i] - 1);
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    v.assign(N, 0);
    dp.assign(N, 1);
    b_dp.assign(N, 1);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }

    solution();
}
*/