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

/* 2564번 경비원
// 해설 : 구현
// url : https://www.acmicpc.net/problem/2564

int N, M, base_distance;
vector<int> stores;

int calculate(const int &y, const int &x)
{
    int result = 0;

    if (y == 1)
        result = x;
    else if (y == 2)
    {
        result = N + M + (M - x);
    }
    else if (y == 3)
    {
        result = 2 * (N + M) - x;
    }
    else
    {
        result = M + x;
    }

    return result;
}

void input()
{
    int cnt;
    cin >> M >> N >> cnt;

    int y, x;

    while (cnt--)
    {
        cin >> y >> x;
        stores.emplace_back(calculate(y, x));
    }

    cin >> y >> x;
    base_distance = calculate(y, x);
}

void solution()
{
    int answer = 0;

    for (auto store : stores)
    {
        int distance = abs(base_distance - store);
        answer += distance <= (N + M) ? distance : 2 * (N + M) - distance;
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