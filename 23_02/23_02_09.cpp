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

/* 10655번 마라톤 1
// 해설 : 브루트포스
// url : https://www.acmicpc.net/problem/10655

int N, answer, total;
vector<pair<int, int>> point;
vector<bool> visited;

void input()
{
    cin >> N;

    int curr_x, curr_y;

    cin >> curr_x >> curr_y;
    point.emplace_back(make_pair(curr_x, curr_y));

    for(int i = 0 ; i < N - 1 ; i++)
    {
        int next_x, next_y;
        cin >> next_x >> next_y;

        point.emplace_back(make_pair(next_x, next_y));
        total += abs(curr_x - next_x) + abs(curr_y - next_y);
        curr_x = next_x;
        curr_y = next_y;
    }
}

void solution()
{
    answer = total;

    int skip = 0;

    for(int i = 1 ; i < N - 1 ; i++)
    {
        int distance = abs(point[i - 1].first - point[i].first) + abs(point[i - 1].second - point[i].second) + abs(point[i].first - point[i + 1].first) + abs(point[i].second - point[i + 1].second);
        int skip_distance = abs(point[i - 1].first - point[i + 1].first) + abs(point[i - 1].second - point[i + 1].second);

        skip = max(skip, distance - skip_distance);
    }

    cout << answer - skip;
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