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

/* 1263번 시간 관리
// 해설 : 그리디, 0시라길래 24시간이 최대인 줄 착각했다.
// url : https://www.acmicpc.net/problem/1263

int N;
vector<pair<int, int>> plan;

void input()
{
    cin >> N;
    plan.assign(N, make_pair(0, 0));

    for(int i = 0 ; i < N ; i++)
    {
        cin >> plan[i].first >> plan[i].second;
    }
}

void solution()
{
    sort(plan.begin(), plan.end(), [](pair<int, int> &a, pair<int, int> &b){return a.second > b.second;});

    int my_last_time = plan[0].second;

    for(int i = 0 ; i < N ; i++)
    {
        int end_time = plan[i].second;
        int spend_time = plan[i].first;

        my_last_time = my_last_time > end_time ? end_time : my_last_time;
        my_last_time -= spend_time;
    }

    my_last_time = my_last_time < 0 ? -1 : my_last_time;
    cout << my_last_time;
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