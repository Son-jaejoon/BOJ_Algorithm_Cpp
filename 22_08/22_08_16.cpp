#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <cmath>
#define endl "\n"

using namespace std;

/* 16974번 레벨 햄버거
// 해설 : 먹는 양에 따라 재귀할지 아닐지
// 참고 : https://nim-code.tistory.com/268

int n;
long long x;
long long dp[51];
long long patty[51];

long long get_patty(int N, long long X)
{
    if(N == 0)
    {
        if(X == 1)
            return 1;
        else if(X == 0)
            return 0;
    }

    if(X == 1)
        return 0;
    else if(X <= dp[N - 1] + 1)
        return get_patty(N - 1, X - 1);
    else if(X == 1 + dp[N - 1] + 1)
        return patty[N - 1] + 1;
    else if(X <= 1 + dp[N - 1] + 1 + dp[N - 1])
        return patty[N - 1] + 1 + get_patty(N - 1, X - 1 - dp[N - 1] - 1);
    else
        return patty[N - 1] * 2 + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> x;
    dp[0] = 1;
    patty[0] = 1;

    for(int i = 1 ; i <= n ; i++)
    {
        dp[i] = 1 + dp[i-1] + 1 + dp[i-1] + 1;
        patty[i] = patty[i - 1] + 1 + patty[i - 1]; 
    }

    cout << get_patty(n, x);
}
*/

/* 11066번 파일합치기
// 해설 : 잘모르겠음 이해가 안됨
// 참고 : https://cocoon1787.tistory.com/317, https://melonicedlatte.com/algorithm/2018/03/22/051337.html

int k;

int file[501];
int sum[501];
int dp[501][501];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;
    while(T--)
    {
        cin >> k;

        for(int i = 1 ; i <= k ; i++)
        {
            cin >> file[i];
            sum[i] = sum[i - 1] + file[i];
        }

        for(int i = 1 ; i <= k ; i++)
        {
            for(int j = 1 ; j <= k - i ; j++)
            {
                dp[j][i+j] = 987654321;

                for(int k = j ; k < i+j ; k++)
                {
                    dp[j][i+j] = min(dp[j][i+j], dp[j][k] + dp[k+1][i+j] + sum[i+j] - sum[j-1]);
                }
            }
        }

        cout << dp[1][k] << endl;
    }
}
*/

/* 11058번 크리보드
// 해설 : 2,3,4는 무조건 같이 이루어져야한다는 것을 생각해야함.
// 2,3,4,4 와 같이 되기 때문에 현재 상태 vs 몇번을 4번을 몇번을 반복하느냐 계산 후 저장

long long dp[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++)
    {
        dp[i] = dp[i-1] + 1;

        for(int j = 3 ; j <= i; j++)
        {
            if(dp[i] < dp[i-j]*(j-1))
                dp[i] = dp[i-j]*(j-1);
        }
    }

    cout << dp[n];
}
*/