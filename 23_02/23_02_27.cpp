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

/* 11047번 동전 0
// 해설 : 그리디, 이분탐색
// url : https://www.acmicpc.net/problem/11047

int N, K, answer;
vector<int> coin;

void input()
{
    cin >> N >> K;
    coin.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> coin[i];
    }
}

void solution()
{
    while(K != 0)
    {
        int idx = upper_bound(coin.begin(), coin.end(), K) - coin.begin();
        idx -= 1;

        answer += K / coin[idx];
        K %= coin[idx];
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