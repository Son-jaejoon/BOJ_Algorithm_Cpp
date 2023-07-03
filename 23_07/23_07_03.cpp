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

/* 7571번 점 모으기
// 해설 : 수학, 정렬, y, x의 정렬 중 중앙값에서 모이는 게 가장 가깝다.
// url : https://www.acmicpc.net/problem/7571

int N, M;
vector<int> y_arr;
vector<int> x_arr;

void input()
{
    cin >> N >> M;

    y_arr.assign(M, 0);
    x_arr.assign(M, 0);

    for(int i = 0 ; i < M ; i++)
    {
        cin >> y_arr[i] >> x_arr[i];
    }
}

void solution()
{
    sort(y_arr.begin(), y_arr.end());
    sort(x_arr.begin(), x_arr.end());

    int mid_y = y_arr[M/2];
    int mid_x = x_arr[M/2];

    int answer = 0;

    for(int i = 0 ; i < M ; i++)
    {
        answer += abs(mid_y - y_arr[i]) + abs(mid_x - x_arr[i]);
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