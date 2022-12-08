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
#include <numeric>
#define endl "\n"

using namespace std;

/* 13172번 Σ
// 해설 : 본문이 길어서 무슨 말을 하는 지 이해하기 어려웠다., 분할정복을 이용한 거듭제곱

long long M, N, S, answer;
long long mod = 1000000007;

long long power(long long x, long long y)
{
    long long res = 1;

    while(y > 0)
    {
        if(y & 1)
            res = (res*x) % mod;
        
        x = (x*x) % mod;
        y >>= 1;
    }

    return res % mod;
}

void input()
{
    cin >> M;
}

void solution()
{
    while(M--)
    {
        cin >> N >> S;

        long long g = gcd(S, N);
        
        N /= g;
        S /= g;

        answer += S*power(N, mod - 2)%mod;
        answer %= mod;
    }

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