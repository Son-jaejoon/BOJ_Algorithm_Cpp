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

/* 16401번 과자 나눠주기
// 해설 : 이분탐색
// url : https://www.acmicpc.net/problem/16401

int N, M;
vector<int> v;

void input()
{
    cin >> M >> N;

    v.assign(N, 0);

    for(int i = 0; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    int answer = 0;

    int lo = 1;
    int hi = *max_element(v.begin(), v.end());

    while(lo <= hi)
    {
        int mid = (lo + hi)/2;

        int cnt = 0;

        for(int i = 0 ; i < N ; i++)
        {
            if(cnt >= M)
                break;

            cnt += v[i]/mid;
        }

        if(cnt < M)
            hi = mid - 1;
        else
        {
            answer = mid;
            lo = mid + 1;
        }
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