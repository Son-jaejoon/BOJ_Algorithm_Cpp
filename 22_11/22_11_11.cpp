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

/* 13977번 이항 계수와 쿼리
// 해설 : 이항 정리, 페르마의 정리, 모듈러 곱셈의 역원, 분할 정복을 이용한 거듭제곱, 수학이었다..
// 참고 : https://justicehui.github.io/ps/2019/08/21/BOJ13977/

long long mod = 1e9 + 7;
long long fact[4000001];

long long pomod(long long a, long long b)
{
    if (b == 1)
        return a % mod;

    if (b & 1)
        return pomod(a, b - 1) * a % mod;

    return pomod(a * a % mod, b / 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fact[0] = fact[1] = 1;

    for (int i = 2; i <= 4000000; ++i)
        fact[i] = fact[i - 1] * i % mod;

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << fact[a] * pomod(fact[a - b] * fact[b] % mod, mod - 2) % mod << endl;
    }
}
*/