#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 16565번 N포커
// 해설 : 처음엔 13종류 중 1개 * 나머지 고르기 이라고 생각해서 WA를 받고,
// 13 중 N종류 * 나머지를 하면서 중복을 빼줘야함을 알았음..

int N;
int MOD = 10007;

int nCk[53][53];

void solution()
{
    for(int i = 0 ; i <= 52 ; i++)
    {
        nCk[i][0] = nCk[i][i] = 1;

        for(int j = 1 ; j < i ; j++)
        {
            nCk[i][j] = nCk[i - 1][j - 1] + nCk[i - 1][j];
            nCk[i][j] %= MOD;
            nCk[i][i - j] = nCk[i][j];
        }
    }

    int ans = 0;

    for(int i = 4 ; i <= N ; i += 4)
    {
        if((i / 4) % 2 == 1)
            ans = (ans + nCk[13][i/4]*nCk[52 - i][N - i]) % MOD;
        else
            ans = (ans - nCk[13][i/4]*nCk[52 - i][N - i]) % MOD;       
    }

    if(ans < 0)
        ans += MOD;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    solution();
}
*/