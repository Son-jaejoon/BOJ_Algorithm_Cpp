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

/* 2212번 센서
// 해설 : 그리디, 문제 자체를 이해하는데 어려웠음.
// url : https://www.acmicpc.net/problem/2212

int N, K;
vector<int> v, dist;

void input()
{
    cin >> N >> K;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    int answer = 0;

    sort(v.begin(), v.end());

    dist.assign(N - 1, 0);

    for(int i = 0 ; i < N - 1 ; i++)
    {
        dist[i] = v[i + 1] - v[i];
    }

    sort(dist.begin(), dist.end());

    for(int i = 0 ; i < N - K ; i++)
    {
        answer += dist[i];
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