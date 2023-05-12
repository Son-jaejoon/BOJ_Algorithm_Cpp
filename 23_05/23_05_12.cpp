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

/* 2343번 기타 레슨
// 해설 : 이분탐색
// url : https://www.acmicpc.net/problem/2343

int N, M;
long long lo, hi;
vector<int> v;

void input()
{
    cin >> N >> M;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
        hi += v[i];
    }
}

void solution()
{
    lo = *max_element(v.begin(), v.end());

    while(lo <= hi)
    {
        long long mid = (lo + hi)/2;

        int cnt = 0;
        long long sum = 0;

        for(int i = 0 ; i < N ; i++)
        {
            if(sum + v[i] > mid)
            {
                sum = 0;
                cnt++;
            }

            sum += v[i];
        }

        if(sum != 0)
            cnt++;

        if(cnt > M)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    cout << lo;
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