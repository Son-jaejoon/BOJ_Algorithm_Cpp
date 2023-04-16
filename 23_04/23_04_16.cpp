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

/* 6236번 용돈 관리
// 해설 : 이분탐색, 최대치 설정 조심, while 문안의 조건 설정시 <= 인지 < 인지..
// url : https://www.acmicpc.net/problem/6236

int N, M;
vector<int> pay;

void input()
{
    cin >> N >> M;
    pay.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> pay[i];
    }
}

long long calculate(long long bank)
{
    long long curr_money = 0;
    int result = 0;

    for(int i = 0 ; i < N ; i++)
    {
        if(curr_money - pay[i] < 0)
        {
            curr_money = bank;
            result++;
        }

        curr_money -= pay[i];
    }

    return result;
}

void solution()
{
    long long answer = 0;
    long long lo = *max_element(pay.begin(), pay.end());
    long long hi = 100000*10000;

    while(lo <= hi)
    {
        long long mid = (lo + hi) / 2;

        int cnt = calculate(mid);

        if(cnt <= M)
            hi = mid - 1;
        else
            lo = mid + 1;
    }

    answer = lo;
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