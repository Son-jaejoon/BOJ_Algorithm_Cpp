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

/* 1654번 랜선 자르기
// 해설 : 이분탐색
// url : https://www.acmicpc.net/problem/1654

int K, N;
vector<long long> v;

void input()
{
    cin >> K >> N;
    v.assign(K, 0);

    for(int i = 0 ; i < K ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    sort(v.begin(), v.end());

    long long left = 1;
    long long right = v.back();
    long long answer = 0;

    while(left <= right)
    {
        long long mid = (left + right)/2;
        long long cnt = 0;

        for(auto i : v)
            cnt += i/mid;
        
        if(cnt >= N)
        {
            answer = max(answer, mid);
            left = mid + 1;
        }
        else
            right = mid - 1;
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