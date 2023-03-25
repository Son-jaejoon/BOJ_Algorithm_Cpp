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

/* 2004번 조합 0의 개수
// 해설 : 수학, 팩토리얼 0의 개수(BOJ_1676)의 문제랑 비슷한 느낌이 들었음.
// url : https://www.acmicpc.net/problem/2004

long long N, M;

long long d2(long long num)
{
    long long cnt = 0;

    for(long long i = 2 ; i <= num ; i *= 2)
    {
        cnt += num/i;
    }

    return cnt;
}

long long d5(long long num)
{
    long long cnt = 0;

    for(long long i = 5 ; i <= num ; i *= 5)
    {
        cnt += num/i;
    }

    return cnt;
}

void input()
{
    cin >> N >> M;
}

void solution()
{
    long long answer = min(d2(N) - d2(M) - d2(N - M), d5(N) - d5(M) - d5(N - M));

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