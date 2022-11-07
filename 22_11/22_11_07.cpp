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

/* 15824번 너 봄에는 캡사이신이 맛있단다.
// 해설 : 조합론, 분할 정복을 이용한 거듭제곱, 거듭제곱을 nlongn으로 줄이는 법을 좀 더 익숙해져야겠다.

int N;
long long ans = 0;
int MOD = 1000000007;
vector<int> v;

long long power(long long a, long long b)
{
    long long res = 1;

    while (b > 0)
    {
        if (b & 1)
            res = (res*a) % MOD;

        a = (a*a) % MOD;
        b >>= 1;
    }

    return res % MOD;
}

void solution()
{
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        ans += v[i] * (power(2, i) + MOD - power(2, (long)N - i - 1)) % MOD;
        ans %= MOD;
    }

    cout << ans % MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    v.assign(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    solution();
}
*/