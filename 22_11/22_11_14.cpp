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
#define endl "\n"

using namespace std;

/* 9465번 스티커
// 해설 : DP

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int dp[2][100001];
        dp[0][0] = dp[1][0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> dp[0][i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> dp[1][i];
        }

        for (int i = 2; i <= n; i++)
        {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + dp[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + dp[1][i];
        }

        int answer = max(dp[1][n], dp[0][n]);

        cout << answer << '\n';
    }

    return 0;
}
*/